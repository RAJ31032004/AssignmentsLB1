////////////////////////////////////////////////////////
//
//   Description  :Program to display only regular files from directory
//                (Ignore sub-directories)
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DisplayRegularFiles
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;

        System.out.println("Enter directory name : ");
        DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            System.out.println("\nRegular files are : ");
            for(File fobj : Arr)
            {
                if(fobj.isFile())     // Check for regular file
                {
                    System.out.println(fobj.getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory name");
        }

        sobj.close();
    }
}
