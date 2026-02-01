///////////////////////////////////////////////////////////
//
//  Program Name : DirectoryToFile.java
//  Description  : Accept directory name from user and write
//                 names of all files from that directory
//                 into newly created file Marvellous.txt
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

//  Class Declaration
class DirectoryToFile
{
    //  Entry Point Function
    public static void main(String Arg[])
    {
        try
        {
            //  Variable Declaration
            String DirName = null;
            File dobj = null;
            File Arr[] = null;

            File fobj = null;
            FileOutputStream foobj = null;

            //  Accept input from user
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the directory name : ");
            DirName = sobj.nextLine();

            //  Directory Handling Logic
            dobj = new File(DirName);

            if(dobj.exists() && dobj.isDirectory())
            {
                Arr = dobj.listFiles();

                // Create Marvellous.txt file
                fobj = new File("Marvellous.txt");

                if(!fobj.exists())
                {
                    fobj.createNewFile();
                }

                foobj = new FileOutputStream(fobj);

                for(File file : Arr)
                {
                    if(file.isFile())
                    {
                        String name = file.getName() + "\n";
                        foobj.write(name.getBytes());
                    }
                }

                System.out.println("File names written successfully into Marvellous.txt");

                foobj.close();
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
