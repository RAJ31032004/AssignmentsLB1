////////////////////////////////////////////////////////
//
//  Description : Program to merge two files into one output file
//                by copying data from both input files
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class MergeFiles
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String File1 = null;
        String File2 = null;
        String OutputFile = null;

        FileInputStream fin1 = null;
        FileInputStream fin2 = null;
        FileOutputStream fout = null;

        byte Buffer[] = new byte[1024];
        int iRet = 0;

        try
        {
            System.out.println("Enter first input file name : ");
            File1 = sobj.nextLine();

            System.out.println("Enter second input file name : ");
            File2 = sobj.nextLine();

            System.out.println("Enter output file name : ");
            OutputFile = sobj.nextLine();

            fin1 = new FileInputStream(File1);
            fin2 = new FileInputStream(File2);
            fout = new FileOutputStream(OutputFile);

            // Copy first file
            while((iRet = fin1.read(Buffer)) != -1)
            {
                fout.write(Buffer, 0, iRet);
            }

            // Copy second file
            while((iRet = fin2.read(Buffer)) != -1)
            {
                fout.write(Buffer, 0, iRet);
            }

            System.out.println("Files merged successfully");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            try
            {
                if(fin1 != null) fin1.close();
                if(fin2 != null) fin2.close();
                if(fout != null) fout.close();
                sobj.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while closing files");
            }
        }
    }
}
