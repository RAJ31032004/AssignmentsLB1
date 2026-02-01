///////////////////////////////////////////////////////////
//
//  Program Name : CreateDirectory.java
//  Description  : Accept directory name from user and
//                 create that directory
//  Author       : RAJ SAMIR JADHAV
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CreateDirectory
{
    
    public static void main(String Arg[])
    {
        try
        {
            
            String DirName = null;
            File dobj = null;

            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the directory name : ");
            DirName = sobj.nextLine();

            
            dobj = new File(DirName);

            if(dobj.exists())
            {
                System.out.println("Directory already exists.");
            }
            else
            {
                if(dobj.mkdir())
                {
                    System.out.println("Directory created successfully.");
                }
                else
                {
                    System.out.println("Unable to create directory.");
                }
            }

            sobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occurred : " + eobj);
        }
    }
}
