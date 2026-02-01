////////////////////////////////////////////////////////
//
//   Description  :Program to display files having given extension
//                 from a specified directory
//  
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DisplayFilesByExtension
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirName = null;
        String Extension = null;

        System.out.println("Enter directory name : ");
        DirName = sobj.nextLine();

        System.out.println("Enter file extension (e.g. .txt, .java) : ");
        Extension = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File Arr[] = dobj.listFiles();

            System.out.println("\nFiles with extension " + Extension + " are : ");
            for(File fobj : Arr)
            {
                if(fobj.isFile())
                {
                    if(fobj.getName().endsWith(Extension))
                    {
                        System.out.println(fobj.getName());
                    }
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
