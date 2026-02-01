////////////////////////////////////////////////////////
//
//  Description : Program to copy file using normal streams
//                and buffered streams and display time required
//
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class StreamTimeComparison
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String SourceFile = null;

        try
        {
            System.out.println("Enter source file name : ");
            SourceFile = sobj.nextLine();

            // -------- Normal Streams --------
            FileInputStream fin1 = new FileInputStream(SourceFile);
            FileOutputStream fout1 = new FileOutputStream("NormalCopy.txt");

            int iByte = 0;

            long startTime1 = System.currentTimeMillis();

            while((iByte = fin1.read()) != -1)
            {
                fout1.write(iByte);
            }

            long endTime1 = System.currentTimeMillis();

            fin1.close();
            fout1.close();

            // -------- Buffered Streams --------
            FileInputStream fin2 = new FileInputStream(SourceFile);
            FileOutputStream fout2 = new FileOutputStream("BufferedCopy.txt");

            BufferedInputStream bin = new BufferedInputStream(fin2);
            BufferedOutputStream bout = new BufferedOutputStream(fout2);

            long startTime2 = System.currentTimeMillis();

            while((iByte = bin.read()) != -1)
            {
                bout.write(iByte);
            }

            bout.flush();
            long endTime2 = System.currentTimeMillis();

            bin.close();
            bout.close();

            // -------- Display Time --------
            System.out.println("\nTime required using Normal Streams   : "
                    + (endTime1 - startTime1) + " ms");

            System.out.println("Time required using Buffered Streams : "
                    + (endTime2 - startTime2) + " ms");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            sobj.close();
        }
    }
}
