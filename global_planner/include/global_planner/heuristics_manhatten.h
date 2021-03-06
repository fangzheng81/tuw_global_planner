
#ifndef _HEURISTICS_MANHATTEN_H
#define _HEURISTICS_MANHATTEN_H

#include <global_planner/heuristics.h>
#include <vector>
#include <algorithm>

namespace global_planner
{
class HeuristicsManhatten : public Heuristics
{
public:
  /**
 * @brief Construct a new Manhatten Diagonal object
 * 
 * @param heuristics_multiplier the multiplier used to weight the heuristic (e.g. 0 = no heuristic/dirjkstra)
 */
  HeuristicsManhatten(float heuristics_multiplier) : Heuristics(heuristics_multiplier)
  {
  }
  /**
 * @brief calculates the heuristic
 * 
 * @param neutral_cost the costs for a step to the next point
 * @return float the heuristics result
 */
  virtual float CalcHeuristic(double act_x, double act_y, double start_x, double start_y, double end_x, double end_y, float neutral_cost);
  /**
   * @brief 
   * 
   * @param lastDistToStart marker to remember the last distance to start calculated
   * @param neutral_cost the costs to expand from one pixel to another
   * @param diagonal marks if the expension is diagonal
   * @return the costs to expand
   */
  virtual float CalcCosts(double act_x, double act_y, double start_x, double start_y, double end_x, double end_y, float lastDistToStart, float neutral_cost, bool diagonal);
};

} // end namespace global_planner
#endif
