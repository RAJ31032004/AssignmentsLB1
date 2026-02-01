////////////////////////////////////////////////////////
//
//   Description  :Program to display the smallest file (by size)
//                 from a given directory
//
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class SmallestFile
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;

        long lMinSize = Long.MAX_VALUE;
        String SmallestFileName = null;

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
                    if(fobj.length() < lMinSize)
                    {
                        lMinSize = fobj.length();
                        SmallestFileName = fobj.getName();
                    }
                }
            }

            if(SmallestFileName != null)
            {
                System.out.println("\nSmallest file is : " + SmallestFileName);
                System.out.println("Size : " + lMinSize + " bytes");
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
