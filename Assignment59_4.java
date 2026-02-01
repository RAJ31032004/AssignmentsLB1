////////////////////////////////////////////////////////
//
//  Description : Program to count total files and total folders
//                from a given directory
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CountFilesFolders
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;

        int iFileCnt = 0;
        int iDirCnt  = 0;

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
                    iFileCnt++;
                }
                else if(fobj.isDirectory())
                {
                    iDirCnt++;
                }
            }

            System.out.println("\nTotal number of files   : " + iFileCnt);
            System.out.println("Total number of folders : " + iDirCnt);
        }
        else
        {
            System.out.println("Invalid directory name");
        }

        sobj.close();
    }
}
