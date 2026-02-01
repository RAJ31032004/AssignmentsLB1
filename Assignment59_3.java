////////////////////////////////////////////////////////
//
//  Description : Program to display only sub-directories
//               (Ignore regular files)
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DisplaySubDirectories
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

            System.out.println("\nSub-directories are : ");
            for(File fobj : Arr)
            {
                if(fobj.isDirectory())     // Check for directory
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
