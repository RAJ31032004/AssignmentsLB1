////////////////////////////////////////////////////////
//
//   Description  :Program to display the largest file (by size)
//                 from a given directory
//
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class LargestFile
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;

        long lMaxSize = 0;
        String LargestFileName = null;

        System.out.println("Enter directory name : ");
        DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            for(File fobj : Arr)
            {
                if(fobj.isFile())
                {
                    if(fobj.length() > lMaxSize)
                    {
                        lMaxSize = fobj.length();
                        LargestFileName = fobj.getName();
                    }
                }
            }

            if(LargestFileName != null)
            {
                System.out.println("\nLargest file is : " + LargestFileName);
                System.out.println("Size : " + lMaxSize + " bytes");
            }
            else
            {
                System.out.println("No regular files found in directory");
            }
        }
        else
        {
            System.out.println("Invalid directory name");
        }
        sobj.close();
    }       
}