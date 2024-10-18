#include <cxxtest/TestSuite.h>
#include <algorithm>
#include "Matrix.h"

using namespace std;
class MyTestSuite : public CxxTest::TestSuite 
{
public:
  void testDefaultConst(void){
    Matrix<int> m;
    TS_ASSERT(m.cols() == 0);
    TS_ASSERT(m.rows() == 0);
    Matrix<int> m3(0);
    TS_ASSERT(m3.cols()== 0 && m3.rows() == 0);


  }

  void testSquareMatrix(void){
    //TS_ASSERT_THROWS_ANYTHING( Matrix<int> m2(4.5));
    
    Matrix<int> m(3);
    Matrix<int> m2(4);

    // test each element in m3 using TS_ASSERT_EQUALS
    



    TS_ASSERT(m.cols()==3 && m.rows() == 3);
    TS_ASSERT(m2.cols()== 4 && m2.rows() == 4);

    // test each element in m using TS_ASSERT
    TS_ASSERT(m(0,0) == 0);
    TS_ASSERT(m(0,1) == 0);
    TS_ASSERT(m(0,2) == 0);
    TS_ASSERT(m(1,0) == 0);
    TS_ASSERT(m(1,1) == 0);
    TS_ASSERT(m(1,2) == 0);
    TS_ASSERT(m(2,0) == 0);
    TS_ASSERT(m(2,1) == 0);
    TS_ASSERT(m(2,2) == 0);

    
    // should throw an error here.
  }

  void testMatrixConstSpecified(void){
    Matrix<int> m(2,3);
    Matrix<int> m2(4,0);
    Matrix<int> m3(0,2);
    

    TS_ASSERT(m.cols()==3.0 && m.rows() == 2.0);
    TS_ASSERT(m2.rows() == 4.0 && m2.cols()== 0 );
    TS_ASSERT(m3.cols()== 2 && m3.rows() == 0);

    //test each element in m using TS_ASSERT

    TS_ASSERT(m(0,0)== 0.0);
    TS_ASSERT(m(0,1)== 0.0);
    TS_ASSERT(m(0,2)== 0.0);
    TS_ASSERT(m(1,0)== 0.0);
    TS_ASSERT(m(1,1)== 0.0);
    TS_ASSERT(m(1,2)== 0.0);


  }

  void testCopyConst(void){
    Matrix<int> m2(2);
    // cout << m2 << endl;
    Matrix<int> m = m2;
    // cout << m << endl;
    m2(1,1) = 1;

    TS_ASSERT_EQUALS(m(0,0), 0);
    TS_ASSERT_EQUALS(m(0,1), 0);
    TS_ASSERT_EQUALS(m(1,0), 0);
    TS_ASSERT_EQUALS(m(1,1), 0);
    
    TS_ASSERT_EQUALS(m2(0,0), 0);
    TS_ASSERT_EQUALS(m2(0,1), 0);
    TS_ASSERT_EQUALS(m2(1,0), 0);
    TS_ASSERT_EQUALS(m2(1,1), 1);


    // TS_ASSERT(m(1,1)== 0.0);
    // TS_ASSERT(m(1,2)== 0.0);
    // TS_ASSERT(m(2,1)== 0.0);
    // TS_ASSERT(m(2,2)== 0.0);
    // TS_ASSERT(m2(1,1)== 1.0);
    // TS_ASSERT(m2(1,2)== 0.0);
    // TS_ASSERT(m2(2,1)== 0.0);
    // TS_ASSERT(m2(2,2)== 0.0);

    TS_ASSERT(m.cols()==2.0 && m.rows() == 2.0);

  }

  void testCopyAssignmentOperator(void){

    Matrix<int> originalMatrix(2, 2); // Assuming a 2x2 matrix
    originalMatrix(0, 0) = 1;
    originalMatrix(0, 1) = 2;
    originalMatrix(1, 0) = 3;
    originalMatrix(1, 1) = 4;


    // originalMatrix(1, 1) = 1;
    // originalMatrix(1, 2) = 2;
    // originalMatrix(2, 1) = 3;
    // originalMatrix(2, 2) = 4;


    Matrix<int> copyMatrix = originalMatrix;
    TS_ASSERT_EQUALS(copyMatrix(0,0), 1);
    TS_ASSERT_EQUALS(copyMatrix(0,1), 2);
    TS_ASSERT_EQUALS(copyMatrix(1,0), 3);
    TS_ASSERT_EQUALS(copyMatrix(1,1), 4);


    // TS_ASSERT(copyMatrix(1,1)== 1.0);
    // TS_ASSERT(copyMatrix(1,2)== 2.0);
    // TS_ASSERT(copyMatrix(2,1)== 3.0);
    // TS_ASSERT(copyMatrix(2,2)== 4.0);

    //check what happends when we change the original matrix
    originalMatrix(0, 0) = 5;
    originalMatrix(0, 1) = 6;
    originalMatrix(1, 0) = 7;
    originalMatrix(1, 1) = 8;





    // originalMatrix(1,1) = 5;
    // originalMatrix(1,2) = 6;
    // originalMatrix(2,1) = 7;
    // originalMatrix(2,2) = 8;
    TS_ASSERT_EQUALS(copyMatrix(0,0), 1);
    TS_ASSERT_EQUALS(copyMatrix(0,1), 2);
    TS_ASSERT_EQUALS(copyMatrix(1,0), 3);
    TS_ASSERT_EQUALS(copyMatrix(1,1), 4);


    // TS_ASSERT(copyMatrix(1,1)== 1.0);
    // TS_ASSERT(copyMatrix(1,2)== 2.0);
    // TS_ASSERT(copyMatrix(2,1)== 3.0);
    // TS_ASSERT(copyMatrix(2,2)== 4.0)


  }
  void testAssignmentMoveOperator(void){
    Matrix<int> m4(6);
    Matrix<int> m3(5);

    // cout << "m4: "<< m4 << endl;
    // cout << "m3: "<< m3 << endl;
    //set values in m4 to 1
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
        m4(i,j) = 1;
      }
    }
    //set values in m3 to 2
    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 5; j++){
        m3(i,j) = 2;
      }
    }
    // cout << "m4: " << m4 << endl;
    // cout << "m3: "<< m3 << endl;
    m3 = std::move(m4);
    // cout << "m4: "<< m4 << endl;
    // cout << "m3: "<< m3 << endl;
    TS_ASSERT(m3.cols()==6.0 && m3.rows() == 6.0);
    //check values in m3
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
        TS_ASSERT(m3(i,j) == 1);
      }
    }

  }

  void testMoveOperator(void){
    Matrix<int> m(4);
    //set values in m to 1
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
        m(i,j) = 1;
      }
    }

    Matrix<int> m2 = std::move(m);

    TS_ASSERT(m2.cols()==4.0 && m2.rows() == 4.0);
    //check values in m2
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
        TS_ASSERT(m2(i,j) == 1);
      }
    }

  }
  void testInitializerList(void){
    Matrix<int> m({1,2,3,4});
    Matrix<int> m2({1,2,3,4,5,6,7,8,9});
    TS_ASSERT(m.cols()==2.0 && m.rows() == 2.0);
    
    TS_ASSERT(m2.cols()==3.0 && m2.rows() == 3.0);
    TS_ASSERT_THROWS_ANYTHING(Matrix<int> m3({1,2,3,4,5}));
    
  }
  void testRows(void){
    Matrix<int> m4(6);
    Matrix<int> m3(5);
    Matrix<int> m2(4);
    Matrix<int> m(3);

    TS_ASSERT(m3.rows() == 5);
    TS_ASSERT(m4.rows() == 6);
    TS_ASSERT(m2.rows() == 4);
    TS_ASSERT(m.rows() == 3);

  }
  void testCols(void){
    Matrix<int> m4(6);
    Matrix<int> m3(5);
    Matrix<int> m2(4);
    Matrix<int> m(3);
    
    
    TS_ASSERT(m3.cols() == 5);
    TS_ASSERT(m4.cols() == 6);
    TS_ASSERT(m2.cols() == 4);
    TS_ASSERT(m.cols() == 3);


  }

  void testGetOperator(void){
    Matrix<int> m4({1,2,3,4});
    Matrix<int> m3({1,2,3,4,5,6,7,8,9});

    // TS_ASSERT(m3(1,2) == 2);
    // TS_ASSERT(m4(2,1) == 3);

    TS_ASSERT_EQUALS(m3(0,1), 2);
    TS_ASSERT_EQUALS(m3(1,0), 4);
    TS_ASSERT_EQUALS(m4(0,1), 2);
    TS_ASSERT_EQUALS(m4(1,0), 3);


  }

  void testSetOperator(void){
    Matrix<int> m(3);
    //Create const matrix
    const Matrix<int> m2(2);
    int adder = 1;
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        m(i,j) = adder;
        adder++;
      }
    }

    // Test assert equals
    TS_ASSERT_EQUALS(m(0,0), 1);
    TS_ASSERT_EQUALS(m(0,1), 2);
    TS_ASSERT_EQUALS(m(0,2), 3);
    TS_ASSERT_EQUALS(m(1,0), 4);
    TS_ASSERT_EQUALS(m(1,1), 5);
    TS_ASSERT_EQUALS(m(1,2), 6);
    TS_ASSERT_EQUALS(m(2,0), 7);
    TS_ASSERT_EQUALS(m(2,1), 8);
    TS_ASSERT_EQUALS(m(2,2), 9);



  
  }

  void testMultOperator(void){
    Matrix<int> m1({1,2,3,4});
    Matrix<int> m2({1,2,3,4});
    Matrix<int> m3 = m1*m2;
    // cout << m3 << endl;
    // cout << m3.cols() << endl;
    // cout << m3.rows() << endl;

    Matrix<int> m4({7,10,15,22});
    TS_ASSERT(m3(0,0) == m4(0,0));
    TS_ASSERT(m3(1,0) == m4(1,0));
    TS_ASSERT(m3(0,1) == m4(0,1));
    TS_ASSERT(m3(1,1) == m4(1,1));
    // Test that it follows matrix multiplication rules
    Matrix<int> mult({1,2,3,4,5,6,7,8,9});
    // TS_ASSERT_THROWS_ANYTHING(Matrix<int> result = m1*mult;);

    Matrix<int> m({0,0,0,0});


    m3 = m1*m2*m4*m;
    // cout << m3 << endl;
    TS_ASSERT_EQUALS(m3(0,0), 0);
    TS_ASSERT_EQUALS(m3(0,1), 0);
    TS_ASSERT_EQUALS(m3(1,0), 0);
    TS_ASSERT_EQUALS(m3(1,1), 0);

    // TS_ASSERT(m3(1,1) == 0);
    // TS_ASSERT(m3(2,1) == 0);
    // TS_ASSERT(m3(1,2) == 0);
    // TS_ASSERT(m3(2,2) == 0);


  }

  void testPlusOperator(void){

    Matrix<int> m1({1,2,3,4});
    Matrix<int> m2({1,2,3,4});
    Matrix<int> m3 = m1+m2;
    Matrix<int> m4({2,4,6,8});
    Matrix<int> m5({1,0,0,0});
    // cout << m3 << endl;
    TS_ASSERT(m3(0,0) == m4(0,0));
    TS_ASSERT(m3(1,0) == m4(1,0));
    TS_ASSERT(m3(0,1) == m4(0,1));
    TS_ASSERT(m3(1,1) == m4(1,1));

    
    //    Test that it has the same dimentions!
    Matrix<int> add({1,2,3,4,5,6,7,8,9});
    TS_ASSERT_THROWS_ANYTHING(Matrix<int> result = m1+add);

    m3 = m1+m2+m5;
    // cout << m3 << endl;
    TS_ASSERT_EQUALS(m3(0,0), 3);
    TS_ASSERT_EQUALS(m3(0,1), 4);
    TS_ASSERT_EQUALS(m3(1,0), 6);
    TS_ASSERT_EQUALS(m3(1,1), 8);

     


  }

  void testMinusOperator(void){
    Matrix<int> m1({1,2,3,4});
    Matrix<int> m4({2,4,6,8});
    Matrix<int> m2({1,2,3,4});
    Matrix<int> m3 = m4-m1;

    TS_ASSERT(m3(0,0) == m2(0,0));
    TS_ASSERT(m3(1,0) == m2(1,0));
    TS_ASSERT(m3(0,1) == m2(0,1));
    TS_ASSERT(m3(1,1) == m2(1,1));


  
    Matrix<int> minus({1,2,3,4,5,6,7,8,9});
    TS_ASSERT_THROWS_ANYTHING(Matrix<int> result = m1-minus);


    m3 = m4-m1-m1;

    
    TS_ASSERT(m3(0,0) == 0);
    TS_ASSERT(m3(1,0) == 0);
    TS_ASSERT(m3(0,1) == 0);
    TS_ASSERT(m3(1,1) == 0);

  }

  void testMultEqualsOperator(void){
    Matrix<int> m1({1,2,3,4});
    Matrix<int> m2({1,2,3,4});
    Matrix<int> m4({7,10,15,22});
    m1*=m2;
    TS_ASSERT(m1(0,0) == m4(0,0));
    TS_ASSERT(m1(1,0) == m4(1,0));
    TS_ASSERT(m1(0,1) == m4(0,1));
    TS_ASSERT(m1(1,1) == m4(1,1));

    
    // Test that it follows matrix multiplication rules
    Matrix<int> mult({1,2,3,4,5,6,7,8,9});
    TS_ASSERT_THROWS_ANYTHING(m1*=mult);  // Different sizes

  }

  void testPlusEqualsOperator(void){
    Matrix<int> m1({1,2,3,4});
    Matrix<int> m2({1,2,3,4});
    m1 +=m2;
    Matrix<int> m4({2,4,6,8});

    TS_ASSERT(m1(0,0) == m4(0,0));
    TS_ASSERT(m1(1,0) == m4(1,0));
    TS_ASSERT(m1(0,1) == m4(0,1));
    TS_ASSERT(m1(1,1) == m4(1,1));

    
    //    Test that it has the same dimentions!
    Matrix<int> add({1,2,3,4,5,6,7,8,9});
    TS_ASSERT_THROWS_ANYTHING( m1+=add);

  }

  void testMinusEqualOperator(void){
    Matrix<int> m1({1,2,3,4});
    Matrix<int> m4({2,4,6,8});
    Matrix<int> m2({1,2,3,4});
    m4-=m1;
    TS_ASSERT(m4(0,0) == m2(0,0));
    TS_ASSERT(m4(1,0) == m2(1,0));
    TS_ASSERT(m4(0,1) == m2(0,1));
    TS_ASSERT(m4(1,1) == m2(1,1));


    Matrix<int> minus({1,2,3,4,5,6,7,8,9});
    TS_ASSERT_THROWS_ANYTHING( m1-= minus);

  }

  void testOstream(void){
    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    //std::cout << m1 << std::endl;
    std::ostringstream output1;
    output1 << m1;

    // std::cout << output1.str() << std::endl;
    std::string o1 = "3 3\n1 2 3\n4 5 6\n7 8 9\n";
    TS_ASSERT(output1.str() == o1);


  }


  void testIstream(void){
    //#include <string>

    Matrix<int> m1(2);
    std::istringstream in1("3 3\n9 8 7\n6 5 4\n3 2 1");
    // cout<< m1 << endl;
    // cout << in1.str() << endl;
    in1 >> m1;
    // cout<< m1 << endl;

    TS_ASSERT(m1(0,0) == 9);
    TS_ASSERT(m1(0,1) == 8);
    TS_ASSERT(m1(0,2) == 7);
    TS_ASSERT(m1(1,0) == 6);
    TS_ASSERT(m1(1,1) == 5);
    TS_ASSERT(m1(1,2) == 4);
    TS_ASSERT(m1(2,0) == 3);
    TS_ASSERT(m1(2,1) == 2);
    TS_ASSERT(m1(2,2) == 1);
    //std::cout << '\n'<<m1(1,1)<<std::endl;
    //std::cout << '\n'<<m1<<std::endl;
  
  }

  void testReset(void){
    Matrix<int> m1({1,2,3,4});
    // cout << m1 << endl;
    m1.reset();
    TS_ASSERT(m1.rows() == 0);
    TS_ASSERT(m1.cols() == 0);
    // TS_ASSERT(m1(1,0) == 0);
    // TS_ASSERT(m1(0,1) == 0);
    // TS_ASSERT(m1(1,1) == 0);

  }

void testIdentity(void){

Matrix <int> m(3);
TS_ASSERT_EQUALS(m(0,0), 0);
TS_ASSERT_EQUALS(m(0,1), 0);
TS_ASSERT_EQUALS(m(0,2), 0);
TS_ASSERT_EQUALS(m(1,0), 0);
TS_ASSERT_EQUALS(m(1,1), 0);
TS_ASSERT_EQUALS(m(1,2), 0);
TS_ASSERT_EQUALS(m(2,0), 0);
TS_ASSERT_EQUALS(m(2,1), 0);
TS_ASSERT_EQUALS(m(2,2), 0);

// cout <<"\n cols:" << m.cols();
// cout <<", rows: "<< m.rows() << endl;
// cout << m << endl;


m = identity<int>(3);

TS_ASSERT_EQUALS(m(0,0), 1);
TS_ASSERT_EQUALS(m(0,1), 0);
TS_ASSERT_EQUALS(m(0,2), 0);
TS_ASSERT_EQUALS(m(1,0), 0);
TS_ASSERT_EQUALS(m(1,1), 1);
TS_ASSERT_EQUALS(m(1,2), 0);
TS_ASSERT_EQUALS(m(2,0), 0);
TS_ASSERT_EQUALS(m(2,1), 0);
TS_ASSERT_EQUALS(m(2,2), 1);





}

void testInser_row(void){

    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    m1.insert_row(2);
    TS_ASSERT_EQUALS(m1(0,0), 1);
    TS_ASSERT_EQUALS(m1(0,1), 2);
    TS_ASSERT_EQUALS(m1(0,2), 3);
    TS_ASSERT_EQUALS(m1(1,0), 4);
    TS_ASSERT_EQUALS(m1(1,1), 5);
    TS_ASSERT_EQUALS(m1(1,2), 6);
    TS_ASSERT_EQUALS(m1(2,0), 0);
    TS_ASSERT_EQUALS(m1(2,1), 0);
    TS_ASSERT_EQUALS(m1(2,2), 0);
    TS_ASSERT_EQUALS(m1(3,0), 7);
    TS_ASSERT_EQUALS(m1(3,1), 8);
    TS_ASSERT_EQUALS(m1(3,2), 9);
    

    TS_ASSERT_THROWS_ANYTHING(m1.insert_row(-1));
    TS_ASSERT_THROWS_ANYTHING(m1.insert_row(5));

    // std::cout << m1(4,3) << std::endl;

  }

  void testAppend_Row(void){
    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    m1.append_row(2);
    TS_ASSERT_EQUALS(m1(0,0), 1);
    TS_ASSERT_EQUALS(m1(0,1), 2);
    TS_ASSERT_EQUALS(m1(0,2), 3);
    TS_ASSERT_EQUALS(m1(1,0), 4);
    TS_ASSERT_EQUALS(m1(1,1), 5);
    TS_ASSERT_EQUALS(m1(1,2), 6);
    TS_ASSERT_EQUALS(m1(2,0), 7);
    TS_ASSERT_EQUALS(m1(2,1), 8);
    TS_ASSERT_EQUALS(m1(2,2), 9);
    TS_ASSERT_EQUALS(m1(3,0), 0);
    TS_ASSERT_EQUALS(m1(3,1), 0);
    TS_ASSERT_EQUALS(m1(3,2), 0);

    TS_ASSERT_THROWS_ANYTHING(m1.append_row(-2));
    TS_ASSERT_THROWS_ANYTHING(m1.append_row(4));



  }

  void testRemove_row(void){
    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    m1.append_row(2);
    //m1.append_row(2);
    m1.remove_row(3);

    TS_ASSERT_EQUALS(m1(0,0), 1);
    TS_ASSERT_EQUALS(m1(0,1), 2);
    TS_ASSERT_EQUALS(m1(0,2), 3);
    TS_ASSERT_EQUALS(m1(1,0), 4);
    TS_ASSERT_EQUALS(m1(1,1), 5);
    TS_ASSERT_EQUALS(m1(1,2), 6);
    TS_ASSERT_EQUALS(m1(2,0), 7);
    TS_ASSERT_EQUALS(m1(2,1), 8);
    TS_ASSERT_EQUALS(m1(2,2), 9);


  }
    void testInsert_column(void){

    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    m1.insert_column(2);

    TS_ASSERT_EQUALS(m1(0,0), 1);
    TS_ASSERT_EQUALS(m1(0,1), 2);
    TS_ASSERT_EQUALS(m1(0,2), 0);
    TS_ASSERT_EQUALS(m1(0,3), 3);
    TS_ASSERT_EQUALS(m1(1,0), 4);
    TS_ASSERT_EQUALS(m1(1,1), 5);
    TS_ASSERT_EQUALS(m1(1,2), 0);
    TS_ASSERT_EQUALS(m1(1,3), 6);
    TS_ASSERT_EQUALS(m1(2,0), 7);
    TS_ASSERT_EQUALS(m1(2,1), 8);
    TS_ASSERT_EQUALS(m1(2,2), 0);
    TS_ASSERT_EQUALS(m1(2,3), 9);



    
    //    Testing to high column number
    TS_ASSERT_THROWS_ANYTHING(m1.insert_column(5));
    
    
    //    Testing to low column number
    TS_ASSERT_THROWS_ANYTHING(m1.insert_column(-1));
    // m1.insert_column(0);
    

  }

  void testAppend_Column(void){
    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    m1.append_column(2);
    TS_ASSERT_EQUALS(m1(0,0), 1);
    TS_ASSERT_EQUALS(m1(0,1), 2);
    TS_ASSERT_EQUALS(m1(0,2), 3);
    TS_ASSERT_EQUALS(m1(0,3), 0);
    TS_ASSERT_EQUALS(m1(1,0), 4);
    TS_ASSERT_EQUALS(m1(1,1), 5);
    TS_ASSERT_EQUALS(m1(1,2), 6);
    TS_ASSERT_EQUALS(m1(1,3), 0);
    TS_ASSERT_EQUALS(m1(2,0), 7);
    TS_ASSERT_EQUALS(m1(2,1), 8);
    TS_ASSERT_EQUALS(m1(2,2), 9);
    TS_ASSERT_EQUALS(m1(2,3), 0);

    TS_ASSERT_THROWS_ANYTHING(m1.append_column(-2));
    TS_ASSERT_THROWS_ANYTHING(m1.append_column(4));









  }


  void testRemove_column(void){
    Matrix<int> m1({1,2,3,4,5,6,7,8,9});
    m1.append_column(2);
    m1.remove_column(3);

    TS_ASSERT_EQUALS(m1(0,0), 1);
    TS_ASSERT_EQUALS(m1(0,1), 2);
    TS_ASSERT_EQUALS(m1(0,2), 3);
    TS_ASSERT_EQUALS(m1(1,0), 4);
    TS_ASSERT_EQUALS(m1(1,1), 5);
    TS_ASSERT_EQUALS(m1(1,2), 6);
    TS_ASSERT_EQUALS(m1(2,0), 7);
    TS_ASSERT_EQUALS(m1(2,1), 8);
    TS_ASSERT_EQUALS(m1(2,2), 9);
    
    
    
    
    }
    
  void testBegin(void)
  {
    Matrix<int> m1({1,2,3,4});

    TS_ASSERT(*m1.begin() == m1(0,0));
    TS_ASSERT(*m1.begin() == 1);

  }
  void testEnd(void)
  {
    Matrix<int> m1({1,2,3,4});

    // std::cout << *m1.end() << std::endl;
    // make ptr to end of matrix
    int* ptr = m1.end();
    // move it back one
    ptr--;
    // check if it is equal to the last element in the matrix
    TS_ASSERT(*ptr == m1(1,1));
    TS_ASSERT(*ptr == 4);

    TS_ASSERT(*m1.end() != m1(1,1));
    TS_ASSERT(*m1.end() != 4);


    Matrix<int> m2({4,3,2,1});
    //use sort from standard library to sort matrix
    cout << "Before sort: " << m2 << endl;
    // sort(m2.begin(), m2.end()-1);
    
    sort(m2.begin(), m2.end());

    cout << "After sort: " << m2 << endl;
    

  }






};
