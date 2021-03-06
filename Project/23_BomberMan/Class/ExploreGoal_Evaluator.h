#ifndef RAVEN_EXPLORE_GOAL_EVALUATOR
#define RAVEN_EXPLORE_GOAL_EVALUATOR
#pragma warning (disable:4786)
//-----------------------------------------------------------------------------
//
//  Name:   ExploreGoal_Evaluator.h
//
//  Author: Mat Buckland (www.ai-junkie.com)
//
//  Desc:  class to calculate how desirable the goal of exploring is
//-----------------------------------------------------------------------------

#include "Goal_Evaluator.h"
#include "Player.h"


class ExploreGoal_Evaluator : public Goal_Evaluator
{ 
public:

  ExploreGoal_Evaluator(double bias):Goal_Evaluator(bias){}
  
  double CalculateDesirability(Player* pBot);

  void  SetGoal(Player* pEnt);

  void RenderInfo(Vector2D Position, Player* pBot);
};

#endif