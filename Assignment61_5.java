////////////////////////////////////////////////////////
//
//  Program to split a file into two separate files
//  (First half and Second half)
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class SplitFile
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        FileInputStream fin = null;
        FileOutputStream fout1 = null;
        FileOutputStream fout2 = null;

        try
        {
            System.out.println("Enter file name : ");
            FileName = sobj.nextLine();

            File fobj = new File(FileName);

            if(!fobj.exists())
            {
                System.out.println("File does not exist");
                return;
            }

            fin = new FileInputStream(fobj);

            long FileSize = fobj.length();
            long HalfSize = FileSize / 2;

            fout1 = new FileOutputStream("FirstHalf.txt");
            fout2 = new FileOutputStream("SecondHalf.txt");

            int iByte = 0;
            long iCnt = 0;

            // Write first half
            while((iByte = fin.read()) != -1 && iCnt < HalfSize)
            {
                fout1.write(iByte);
                iCnt++;
            }

            // Write second half
            while((iByte = fin.read()) != -1)
            {
                fout2.write(iByte);
            }

            System.out.println("File split successfully");
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
                if(fout1 != null) fout1.close();
                if(fout2 != null) fout2.close();
                sobj.close();
            }
            catch(Exception e)
            {
                System.out.println("Error while closing files");
            }
        }
    }
}
