
class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainCountermeasuresComponent {
                useSmokeGrenadeDelay = 10;
                CMCheckDelay = 0.8;
                suppressionThreshold = 0.5;
                nonLeaderSmokeProbability = 0.5;
                CMOnTargettedProbability = 0.5;
                suppressionTimerMax = 2;
                minimalThrowDistance = 900;
                minReactionTime = 0.25;
                maxReactionTime = 3;
                randomReactionTimePercent = 0.2;
            };
            class AIBrainSuppressionComponent {
                maxSuppression = 1;
                worstDecreaseTime = 90;
                bestDecreaseTime = 65;
                SuppressionRange = 20;
                CauseFireWeight = 0.025;
                CauseHitWeight = 0.3;
                CauseExplosionWeight = 0.005;
                CauseBulletCloseWeight = 0.045;
                SuppressionThreshold = 0.5;
            };
            class AIBrainAimingErrorComponent {
                maxAngularError = 0.05;
                maxAngularErrorTurrets = 0.045;
                worstDecreaseTime = 1.1;
                bestDecreaseTime = 1;
                lostTargetTimeMin = 0.5;
                lostTargetTimeMax = 3;
                shootingInfluence = 0.4;
                movingInfluence = 1;
                turningInfluence = 1;
                damageCoef = 10;
                fatigueCoef = 10;
                suppressionCoef = 0.25;
                lostTargetCoef = 3;
            };
        };
    };
};
