////////////////////////////////////////////////////////
//
//  Program to display file name along with
//  its absolute path from a directory
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DisplayFileAbsolutePath
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

            System.out.println("\nFile Name\t\tAbsolute Path");
            System.out.println("------------------------------------------------");

            for(File fobj : Arr)
            {
                if(fobj.isFile())   // Consider only files
                {
                    System.out.println(
                        fobj.getName() + "\t\t" + fobj.getAbsolutePath()
                    );
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
