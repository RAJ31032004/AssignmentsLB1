////////////////////////////////////////////////////////
//
//   Description  :Program to calculate total size of all files
//                 from a given directory
//
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DirectoryFileSize
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;

        long lTotalSize = 0;   // long because size can be large

        System.out.println("Enter directory name : ");
        DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            for(File fobj : Arr)
            {
                if(fobj.isFile())    // Consider only regular files
                {
                    lTotalSize = lTotalSize + fobj.length();
                }
            }

            System.out.println("\nTotal size of all files : " + lTotalSize + " bytes");
        }
        else
        {
            System.out.println("Invalid directory name");
        }

        sobj.close();
    }
}
