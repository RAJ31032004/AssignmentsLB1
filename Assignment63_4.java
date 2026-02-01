////////////////////////////////////////////////////////
//
//  Description : Program to combine all files from a directory
//                into a single file : Combined.bin
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CombineFiles
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;

        FileOutputStream fout = null;
        FileInputStream fin = null;

        byte Buffer[] = new byte[1024];
        int iRet = 0;

        try
        {
            System.out.println("Enter directory name : ");
            DirName = sobj.nextLine();

            File dobj = new File(DirName);

            if(!dobj.exists() || !dobj.isDirectory())
            {
                System.out.println("Invalid directory");
                return;
            }

            fout = new FileOutputStream("Combined.bin");

            File files[] = dobj.listFiles();

            for(File fobj : files)
            {
                if(fobj.isFile())
                {
                    fin = new FileInputStream(fobj);

                    while((iRet = fin.read(Buffer)) != -1)
                    {
                        fout.write(Buffer, 0, iRet);
                    }

                    fin.close();
                }
            }

            System.out.println("All files combined into Combined.bin successfully");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            try
            {
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
