///////////////////////////////////////////////////////////
//
//  Program Name : DirectoryDataMerge.java
//  Description  : Accept directory name from user and write
//                 data of all files into one newly created
//                 file named Marvellous.txt
//  Author       : Raj Samir Jadhav
//  Date         : 31/01/2026
//
///////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;


class DirectoryDataMerge
{
   
    public static void main(String Arg[])
    {
        try
        {
           
            String DirName = null;
            File dobj = null;
            File Arr[] = null;

            FileInputStream fiobj = null;
            FileOutputStream foobj = null;

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the directory name : ");
            DirName = sobj.nextLine();

            
            dobj = new File(DirName);

            if(dobj.exists() && dobj.isDirectory())
            {
                Arr = dobj.listFiles();

                // Create Marvellous.txt
                foobj = new FileOutputStream("Marvellous.txt");

                for(File fobj : Arr)
                {
                    if(fobj.isFile())
                    {
                        fiobj = new FileInputStream(fobj);

                        // Write file name as header
                        String Header = "\n--- File : " + fobj.getName() + " ---\n";
                        foobj.write(Header.getBytes());

                        // Copy data
                        while((iRet = fiobj.read(Buffer)) != -1)
                        {
                            foobj.write(Buffer, 0, iRet);
                        }

                        fiobj.close();
                    }
                }

                System.out.println("Data of all files written successfully into Marvellous.txt");

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
