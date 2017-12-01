#include "common.h"
#include "function.h"
#include "abc.h"
#include "ba.h"


int main(int argc, char const *argv[])
{
	void* pFuncion;

    //ABC
    SearchSpace *s = NULL;
    printf("%d\n", atoi(argv[1]));
    pFuncion = param_function(pFuncion,atoi(argv[1]));

    s = ReadSearchSpaceFromFile("../model_files/abc_model.txt", _ABC_); /* It reads the model file and creates a search space. We are going to use ABC to solve our problem. */

    InitializeSearchSpace(s, _ABC_); /* It initalizes the search space */

    if (CheckSearchSpace(s, _ABC_)) /* It checks wether the search space is valid or not */
        runABC(s, pFuncion);          /* It minimizes function Sphere */

    DestroySearchSpace(&s, _ABC_); /* It deallocates the search space */

    //BA
    // SearchSpace *s = NULL;
    printf("%d\n", atoi(argv[1]));
    pFuncion = param_function(pFuncion,atoi(argv[1]));

    s = ReadSearchSpaceFromFile("../model_files/ba_model.txt", _BA_); /* It reads the model file and creates a search space. We are going to use BA to solve our problem. */

    InitializeSearchSpace(s, _BA_); /* It initalizes the search space */

    if (CheckSearchSpace(s, _BA_)) /* It checks wether the search space is valid or not */
        runBA(s, pFuncion);            /* It minimizes function Levy */

    DestroySearchSpace(&s, _BA_); /* It deallocates the search space */
    return 0;
}
