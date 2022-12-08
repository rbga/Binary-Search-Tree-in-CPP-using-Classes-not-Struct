//Coded By
//Ganeshaanand (Rishi) Balasubramanian
//@_rbga_
//Master of Applied Sciences, Electrical and Computer Engineering
//Dalhosuie University, Halifax, Canada 2022


#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////

class BSTN      //Create Binary Search Tree Node (BSTN) Class
{
	int key;    //Storage for each nodes
	BSTN * L;   //Class pointer for Left L
	BSTN * R;   //Class pointer for Right R
	
    public:
	    BSTN();                     //Constructor Declaration
	    BSTN(int);                  //Parametered Constructor Declaration
	    BSTN * ins(BSTN *, int);    //Class pointer for INSERT Function Declaration
	    void orderit(BSTN *);       //Inorder traversal Function resulting in ordered list of the node Declaration
	    int min(BSTN *);            //Int Function for Minimum Value function Declaration
	    int max(BSTN *);            //Int Function for Maximum Value function Declaration
	    BSTN * rem(BSTN *, int);    //Remove Function Declaration
};

///////////////////////////////////////////////////////////////////////////

BSTN :: BSTN()  	//Constructor definition
	  : key(0)  	//Constructor key pointer
	  , L(NULL) 	//Constructor L pointer
	  , R(NULL) 	//Constructor R pointer
{
}

///////////////////////////////////////////////////////////////////////////

BSTN :: BSTN (int val)   	//Parametered Constructor definition
{
	key = val;          	//Store into key
	L = R = NULL;       	//Set L and R to Null
}

///////////////////////////////////////////////////////////////////////////

BSTN * BSTN :: ins(BSTN * root, int val)    		//Insert Function definition
{
	if (!root) 
	{
		return new BSTN(val);               	//If no root, insert as first value
    	}                            
                                            		//Begin Data Insertion. Small values on L, vice versa
                                            
	if (val > root -> key)                  	//If Values greater than root
	{
		root -> R = ins(root -> R, val);    	//Insert recursively into R leaf nodes
	}
	
	else if (val < root -> key)             	//If Values lesser than root
	{
		root -> L = ins(root -> L, val);    	//Insert recursively into L leaf nodes
	}
	
	return root;
}

///////////////////////////////////////////////////////////////////////////

void BSTN :: orderit(BSTN * root)           			//Inorder function definition
{
	if (!root)                              		//End if no root
	{
		return;
	}
	
	orderit(root -> L);                                 	//Recursively Call orderit for L leaves
	cout << root -> key << " ";  				//Print Key Value	
	orderit(root -> R);                                 	//Recursively Call orderit for R leaves
}

///////////////////////////////////////////////////////////////////////////

int BSTN :: min(BSTN * root)                //Minimum Function definition
{
    if (!root)
    {
        cout << "\n Wrong Root" << endl;    //Print Wrong Root
    }
    
    if(root -> L == NULL)                   //If Left of root is NULL   
    {
            return root -> key;             //Then that is MIN, return key
    }    
   
    return min(root -> L);                  //(else) recursively call Left of Root in MIN function
}

///////////////////////////////////////////////////////////////////////////

int BSTN :: max(BSTN * root)                //Minimum Function definition
{
    int * temp;
    if (!root)
    {
        cout << "\n Wrong Root" << endl;    //Print Wrong Root
    }
    
    if (root -> R == NULL)                  //If Right of root is NULL   
    {
        return root -> key;                 //Then that is MAX, return key
    }

        return max(root -> R);              //(else) recursively call Right of Root in MAX function
}

///////////////////////////////////////////////////////////////////////////

BSTN * BSTN :: rem(BSTN * root, int val)                //Remove function definition
{
    if (root == NULL)                                   //Failure case
    {
        cout << "\n Wrong Root!!!" << endl;;
    }
    
    if (val < root -> key)                              //If value to delete is less than root
    {
        root -> L = rem(root -> L, val);                //Recursively keep calling REMOVE for Left roots
    }
    else if (val > root -> key)                         //If value to delete is greater than root
    {
        root -> R = rem(root -> R, val);                //Recursively keep calling REMOVE for Right roots
    }
    else                                                //ELSE if key is root
    {
        if (root -> L == NULL && root -> R == NULL)     //If both sides child's are empty
        {
            return NULL;
        }
        else if (root -> L == NULL)                     //If Left Child alone is 1 or empty
        {
            BSTN * temp = root -> R;                    //Create temp class pointer object and store right root
            delete root;                                //Delete right root
            return temp;                                //Return stored root in temp
        }
        else if (root -> R == NULL)                     //If Right Child alone is 1 or empty
        {
            BSTN * temp = root -> L;                    //Create temp class pointer object and store left root
            delete root;                                //Delete left root
            return temp;                                //Return stored root in temp
        }
        
        int minval = min(root -> R);                       //Else find MIN of right root
        root -> key = minval;                              //Copy it to root 
        root -> R = rem(root -> R, minval);                //And recursively call REMOVE
    }
    return root;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// Main code
int main()
{
	BSTN b;                                            //Create Class Object BSTN
	BSTN * root = NULL;                                //Initialise root as NULL
	root = b.ins(root, 1);                             //Inset Root value and store as Root
	
	for (int i = 20; i != 0; i--)                      //Add Numbers in a for loop
	{
	    b.ins(root, i);
	}

    	cout << "\nThe In Ordered Traversal of the current Binary Tree" << endl;
	b.orderit(root);    //Calling orderit
	                    
	                    //Max and Min function
	cout << "\n\nMax of Nodes using Max Recursive function is " << b.max(root);
	cout << "\nMin of Nodes using Min Recursive function is " << b.min(root) << endl;
	                    
	                    //Call remove and check
	cout << "\nRemoving Value 12" << endl;
	root = b.rem(root, 12);
	b.orderit(root);
	return 0;
}
