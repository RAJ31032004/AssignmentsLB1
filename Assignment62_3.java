////////////////////////////////////////////////////////
//
//  Description : Program to copy last N bytes of a file
//  into a new file.
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CopyLastNBytes
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        int N = 0;

        FileInputStream fin = null;
        FileOutputStream fout = null;

        try
        {
            System.out.println("Enter file name : ");
            FileName = sobj.nextLine();

            System.out.println("Enter number of bytes : ");
            N = sobj.nextInt();

            File fobj = new File(FileName);

            if(!fobj.exists())
            {
                System.out.println("File does not exist");
                return;
            }

            long FileSize = fobj.length();

            if(N > FileSize)
            {
                System.out.println("N is greater than file size");
                return;
            }

            fin = new FileInputStream(fobj);
            fout = new FileOutputStream("LastNBytes.txt");

            // Skip bytes to reach last N bytes
            fin.skip(FileSize - N);

            int iByte = 0;

            while((iByte = fin.read()) != -1)
            {
                fout.write(iByte);
            }

            System.out.println("Last " + N + " bytes copied successfully");
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
                System.out.println("Error while closing files");
            }
        }
    }
}
