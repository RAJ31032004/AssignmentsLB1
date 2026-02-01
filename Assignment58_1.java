///////////////////////////////////////////////////////////
//
//  Program Name : RegularFiles.java
//  Description  : Accept directory name from user and
//                 display names of regular files only
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;


class RegularFiles
{
    
    public static void main(String Arg[])
    {
        try
        {
           
            String DirName = null;
            File dobj = null;
            File Arr[] = null;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the directory name : ");
            DirName = sobj.nextLine();

            dobj = new File(DirName);

            if(dobj.exists() && dobj.isDirectory())
            {
                Arr = dobj.listFiles();

                System.out.println("\nRegular files in directory:\n");

                for(File fobj : Arr)
                {
                    if(fobj.isFile())   // Regular file
                    {
                        System.out.println(fobj.getName());
                    }
                }
            }
            else
            {
                System.out.println("Invalid directory name.");
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
