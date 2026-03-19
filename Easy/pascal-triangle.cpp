class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> passcalTri; //declaring a dynamic 2d arayy using the vector
        for (int i = 0 ; i < numRows; ++i)//iterating to the nuber of rows
        {
            vector<int> row(i+1, 1); //intitializing a subarray with 1's
            for (int j = 1 ; j<i; j++) //assigning the value for the middle loacations
            {
                row [j] = passcalTri[i-1][j-1] + passcalTri[i-1][j]; //adding the previus two values
            }
            passcalTri.push_back(row); //pushing the final row to the vector
        }
        return passcalTri; //returning the required 2d vector array
    }
};