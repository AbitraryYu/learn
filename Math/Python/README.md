To include libraries in python:
```
import yourfilename

```

Once included, one can execute using python3 (in Linux/UNIX):
```
python3 exeutablefile.py

```

Your desktop should create a folder called __pycache__ to store complier binary information.

# Q&A
1. My terminal saids it doesn't execute, what could I do?
  - Try the following command in terminal to enable the file as executable.
  ```
  chmod +x yourfilename.py
  ```
  
  or if you are lazy and would like to enable all files as executables:
  
  ```
  chmod +x *.*
  ```
  where * is a wildcard (i.e. whatever character and whatever length)
