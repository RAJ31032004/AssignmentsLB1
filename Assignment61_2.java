////////////////////////////////////////////////////////
//
//  Description : Program to copy data from source file to destination
//                using byte[] buffer
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class FileCopyBuffer
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String SourceFile = null;
        String DestFile = null;

        FileInputStream fin = null;
        FileOutputStream fout = null;

        byte Buffer[] = new byte[1024];   // 1 KB buffer
        int iRet = 0;

        try
        {
            System.out.println("Enter source file name : ");
            SourceFile = sobj.nextLine();

            System.out.println("Enter destination file name : ");
            DestFile = sobj.nextLine();

            fin = new FileInputStream(SourceFile);
            fout = new FileOutputStream(DestFile);

            while((iRet = fin.read(Buffer)) != -1)
            {
                fout.write(Buffer, 0, iRet);
            }

            System.out.println("File copied successfully using buffer");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            try
            {
                if(fin != null) fin.close();
                if(fout != null) fout.close();
                sobj.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while closing file");
            }
        }
    }
}
