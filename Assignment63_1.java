////////////////////////////////////////////////////////
//
//  Description : Program to copy file using
//                BufferedInputStream and BufferedOutputStream.
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026 
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class BufferedFileCopy
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String SourceFile = null;
        String DestFile = null;

        FileInputStream fin = null;
        FileOutputStream fout = null;
        BufferedInputStream bin = null;
        BufferedOutputStream bout = null;

        int iByte = 0;

        try
        {
            System.out.println("Enter source file name : ");
            SourceFile = sobj.nextLine();

            System.out.println("Enter destination file name : ");
            DestFile = sobj.nextLine();

            fin = new FileInputStream(SourceFile);
            fout = new FileOutputStream(DestFile);

            bin = new BufferedInputStream(fin);
            bout = new BufferedOutputStream(fout);

            while((iByte = bin.read()) != -1)
            {
                bout.write(iByte);
            }

            System.out.println("File copied successfully using buffered streams");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            try
            {
                if(bin != null) bin.close();
                if(bout != null) bout.close();
                if(fin != null) fin.close();
                if(fout != null) fout.close();
                sobj.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while closing streams");
            }
        }
    }
}
