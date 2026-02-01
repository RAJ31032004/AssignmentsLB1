///////////////////////////////////////////////////////////
//
//  Program Name : DirectoryFiles.java
//  Description  : Accept directory name from user and
//                 display all file names and their sizes
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DirectoryFiles
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

                System.out.println("\nFile Name\t\tFile Size (bytes)");
                System.out.println("---------------------------------------");

                for(File fobj : Arr)
                {
                    if(fobj.isFile())
                    {
                        System.out.println(fobj.getName() + "\t\t" + fobj.length());
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
