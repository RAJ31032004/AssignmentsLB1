////////////////////////////////////////////////////////
//
//  Description : Program to copy all files from source directory
//                into destination directory
//  Author      : Raj Samir Jadhav
//  Date        : 31/01/2026
//
////////////////////////////////////////////////////////

import java.io.*;
import java.util.*;

class CopyDirectoryFiles
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String SrcDir = null;
        String DestDir = null;

        try
        {
            System.out.println("Enter source directory name : ");
            SrcDir = sobj.nextLine();

            System.out.println("Enter destination directory name : ");
            DestDir = sobj.nextLine();

            File srcObj = new File(SrcDir);
            File destObj = new File(DestDir);

            // Validate source directory
            if(!srcObj.exists() || !srcObj.isDirectory())
            {
                System.out.println("Invalid source directory");
                return;
            }

            // Create destination directory if not exists
            if(!destObj.exists())
            {
                destObj.mkdir();
            }

            File files[] = srcObj.listFiles();
            byte Buffer[] = new byte[1024];
            int iRet = 0;

            for(File fobj : files)
            {
                if(fobj.isFile())   // Copy only files
                {
                    FileInputStream fin =
                        new FileInputStream(fobj);

                    FileOutputStream fout =
                        new FileOutputStream(
                            DestDir + File.separator + fobj.getName()
                        );

                    while((iRet = fin.read(Buffer)) != -1)
                    {
                        fout.write(Buffer, 0, iRet);
                    }

                    fin.close();
                    fout.close();
                }
            }

            System.out.println("All files copied successfully");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }
        finally
        {
            sobj.close();
        }
    }
}
