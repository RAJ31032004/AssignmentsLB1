////////////////////////////////////////////////////////
//
//   Description  :Program to check whether path exists or not
//                 If exists, display whether it is file or directory
//
//   Author       : Raj Samir Jadhav
//   Date         : 31/01/2026

////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CheckPath
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String PathName = null;

        System.out.println("Enter path : ");
        PathName = sobj.nextLine();

        File fobj = new File(PathName);

        if(fobj.exists())
        {
            System.out.println("Path exists");

            if(fobj.isFile())
            {
                System.out.println("It is a regular file");
            }
            else if(fobj.isDirectory())
            {
                System.out.println("It is a directory");
            }
        }
        else
        {
            System.out.println("Path does not exist");
        }

        sobj.close();
    }
}
