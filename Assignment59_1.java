///////////////////////////////////////////////////////
//
//   Description  :Program to display all file names from a directory
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026
//
///////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class DisplayFiles
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
            String FileList[] = dobj.list();

            System.out.println("\nFiles in directory are : ");
            for(String name : FileList)
            {
                System.out.println(name);
            }
        }
        else
        {
            System.out.println("Invalid directory name");
        }

        sobj.close();
    }
}
