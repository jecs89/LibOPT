/* BSO implementation is based on the paper available at www.sciencedirect.com/science/article/pii/S2210650216301766 */

#ifndef BSO_H
#define BSO_H

#include "opt.h"

/* BSO-related functions */
void k_means(SearchSpace *s, int *best_ideas, int ***ideas_per_cluster); /* It clusters the agents and returns a pointer with the best agent's ID per cluster */
void runBSO(SearchSpace *s, prtFun Evaluate, ...); /* It executes the Brain Storm Optimization for function minimization */
/*************************/

#endif
