#ifndef BEHAVIOR_TABLE_H
#define BEHAVIOR_TABLE_H

#include "behavior_data.h"

extern const BehaviorScript* gBehaviorTable[];

enum BehaviorId {
    id_bhvStarDoor,
    id_bhvMrI,
    id_bhvMrIBody,
    id_bhvMrIParticle,
    id_bhvPurpleParticle,
    id_bhvGiantPole,
    id_bhvPoleGrabbing,
    id_bhvThiHugeIslandTop,
    id_bhvThiTinyIslandTop,
    id_bhvCapSwitchBase,
    id_bhvCapSwitch,
    id_bhvKingBobomb,
    id_bhvBobombAnchorMario,
    id_bhvBetaChestBottom,
    id_bhvBetaChestLid,
    id_bhvBubbleParticleSpawner,
    id_bhvBubbleMaybe,
    id_bhvBubblePlayer,
    id_bhvSmallWaterWave,
    id_bhvWaterAirBubble,
    id_bhvSmallParticle,
    id_bhvPlungeBubble,
    id_bhvSmallParticleSnow,
    id_bhvSmallParticleBubbles,
    id_bhvFishGroup,
    id_bhvCannon,
    id_bhvCannonBarrel,
    id_bhvCannonBaseUnused,
    id_bhvChuckya,
    id_bhvChuckyaAnchorMario,
    id_bhvUnused05A8,
    id_bhvRotatingPlatform,
    id_bhvTower,
    id_bhvBulletBillCannon,
    id_bhvWfBreakableWallRight,
    id_bhvWfBreakableWallLeft,
    id_bhvKickableBoard,
    id_bhvTowerDoor,
    id_bhvRotatingCounterClockwise,
    id_bhvWfRotatingWoodenPlatform,
    id_bhvKoopaShellUnderwater,
    id_bhvExitPodiumWarp,
    id_bhvFadingWarp,
    id_bhvWarp,
    id_bhvWarpPipe,
    id_bhvWhitePuffExplosion,
    id_bhvSpawnedStar,
    id_bhvSpawnedStarNoLevelExit,
    id_bhvMrIBlueCoin,
    id_bhvCoinInsideBoo,
    id_bhvCoinFormationSpawn,
    id_bhvCoinFormation,
    id_bhvOneCoin,
    id_bhvYellowCoin,
    id_bhvTemporaryYellowCoin,
    id_bhvThreeCoinsSpawn,
    id_bhvTenCoinsSpawn,
    id_bhvSingleCoinGetsSpawned,
    id_bhvCoinSparkles,
    id_bhvGoldenCoinSparkles,
    id_bhvWallTinyStarParticle,
    id_bhvVertStarParticleSpawner,
    id_bhvPoundTinyStarParticle,
    id_bhvHorStarParticleSpawner,
    id_bhvPunchTinyTriangle,
    id_bhvTriangleParticleSpawner,
    id_bhvDoorWarp,
    id_bhvDoor,
    id_bhvGrindel,
    id_bhvThwomp2,
    id_bhvThwomp,
    id_bhvTumblingBridgePlatform,
    id_bhvWfTumblingBridge,
    id_bhvBbhTumblingBridge,
    id_bhvLllTumblingBridge,
    id_bhvFlame,
    id_bhvAnotherElavator,
    id_bhvRrElevatorPlatform,
    id_bhvHmcElevatorPlatform,
    id_bhvWaterMist,
    id_bhvBreathParticleSpawner,
    id_bhvBreakBoxTriangle,
    id_bhvWaterMist2,
    id_bhvUnused0DFC,
    id_bhvMistCircParticleSpawner,
    id_bhvDirtParticleSpawner,
    id_bhvSnowParticleSpawner,
    id_bhvWind,
    id_bhvEndToad,
    id_bhvEndPeach,
    id_bhvUnusedParticleSpawn,
    id_bhvUkiki,
    id_bhvUkikiCageChild,
    id_bhvUkikiCageStar,
    id_bhvUkikiCage,
    id_bhvBitfsSinkingPlatforms,
    id_bhvBitfsSinkingCagePlatform,
    id_bhvDddMovingPole,
    id_bhvBitfsTiltingInvertedPyramid,
    id_bhvSquishablePlatform,
    id_bhvCutOutObject,
    id_bhvBetaMovingFlames,
    id_bhvRrRotatingBridgePlatform,
    id_bhvFlamethrower,
    id_bhvFlamethrowerFlame,
    id_bhvBouncingFireball,
    id_bhvBouncingFireballFlame,
    id_bhvBowserShockWave,
    id_bhvFireParticleSpawner,
    id_bhvBlackSmokeMario,
    id_bhvBlackSmokeBowser,
    id_bhvBlackSmokeUpward,
    id_bhvBetaFishSplashSpawner,
    id_bhvSpindrift,
    id_bhvTowerPlatformGroup,
    id_bhvWfSlidingTowerPlatform,
    id_bhvWfElevatorTowerPlatform,
    id_bhvWfSolidTowerPlatform,
    id_bhvLeafParticleSpawner,
    id_bhvTreeSnow,
    id_bhvTreeLeaf,
    id_bhvAnotherTiltingPlatform,
    id_bhvSquarishPathMoving,
    id_bhvSquarishPathParent,
    id_bhvPiranhaPlantBubble,
    id_bhvPiranhaPlantWakingBubbles,
    id_bhvFloorSwitchAnimatesObject,
    id_bhvFloorSwitchGrills,
    id_bhvFloorSwitchHardcodedModel,
    id_bhvFloorSwitchHiddenObjects,
    id_bhvHiddenObject,
    id_bhvBreakableBox,
    id_bhvPushableMetalBox,
    id_bhvHeaveHo,
    id_bhvHeaveHoThrowMario,
    id_bhvCcmTouchedStarSpawn,
    id_bhvUnusedPoundablePlatform,
    id_bhvBetaTrampolineTop,
    id_bhvBetaTrampolineSpring,
    id_bhvJumpingBox,
    id_bhvBooCage,
    id_bhvStub,
    id_bhvIgloo,
    id_bhvBowserKey,
    id_bhvGrandStar,
    id_bhvBetaBooKey,
    id_bhvAlphaBooKey,
    id_bhvBulletBill,
    id_bhvWhitePuffSmoke,
    id_bhvUnused1820,
    id_bhvBowserTailAnchor,
    id_bhvBowser,
    id_bhvBowserBodyAnchor,
    id_bhvBowserFlameSpawn,
    id_bhvTiltingBowserLavaPlatform,
    id_bhvFallingBowserPlatform,
    id_bhvBlueBowserFlame,
    id_bhvFlameFloatingLanding,
    id_bhvBlueFlamesGroup,
    id_bhvFlameBouncing,
    id_bhvFlameMovingForwardGrowing,
    id_bhvFlameBowser,
    id_bhvFlameLargeBurningOut,
    id_bhvBlueFish,
    id_bhvTankFishGroup,
    id_bhvCheckerboardElevatorGroup,
    id_bhvCheckerboardPlatformSub,
    id_bhvBowserKeyUnlockDoor,
    id_bhvBowserKeyCourseExit,
    id_bhvInvisibleObjectsUnderBridge,
    id_bhvWaterLevelPillar,
    id_bhvDddWarp,
    id_bhvMoatGrills,
    id_bhvClockMinuteHand,
    id_bhvClockHourHand,
    id_bhvMacroUkiki,
    id_bhvStub1D0C,
    id_bhvLllRotatingHexagonalPlatform,
    id_bhvLllSinkingRockBlock,
    id_bhvStub1D70,
    id_bhvLllMovingOctagonalMeshPlatform,
    id_bhvLllRotatingBlockWithFireBars,
    id_bhvLllRotatingHexFlame,
    id_bhvLllWoodPiece,
    id_bhvLllFloatingWoodBridge,
    id_bhvVolcanoFlames,
    id_bhvLllRotatingHexagonalRing,
    id_bhvLllSinkingRectangularPlatform,
    id_bhvLllSinkingSquarePlatforms,
    id_bhvLllTiltingInvertedPyramid,
    id_bhvUnused1F30,
    id_bhvKoopaShell,
    id_bhvKoopaShellFlame,
    id_bhvToxBox,
    id_bhvPiranhaPlant,
    id_bhvLllHexagonalMesh,
    id_bhvLllBowserPuzzlePiece,
    id_bhvLllBowserPuzzle,
    id_bhvTuxiesMother,
    id_bhvPenguinBaby,
    id_bhvUnused20E0,
    id_bhvSmallPenguin,
    id_bhvFish2,
    id_bhvFish3,
    id_bhvLargeFishGroup,
    id_bhvFish,
    id_bhvWdwExpressElevator,
    id_bhvWdwExpressElevatorPlatform,
    id_bhvChirpChirp,
    id_bhvBub,
    id_bhvExclamationBox,
    id_bhvRotatingExclamationMark,
    id_bhvSoundSpawner,
    id_bhvRockSolid,
    id_bhvBowserSubDoor,
    id_bhvBowsersSub,
    id_bhvSushiShark,
    id_bhvSushiSharkCollisionChild,
    id_bhvJrbSlidingBox,
    id_bhvShipPart3,
    id_bhvInSunkenShip3,
    id_bhvSunkenShipPart,
    id_bhvSunkenShipPart2,
    id_bhvInSunkenShip,
    id_bhvInSunkenShip2,
    id_bhvMistParticleSpawner,
    id_bhvWhitePuff1,
    id_bhvWhitePuff2,
    id_bhvWhitePuffSmoke2,
    id_bhvPurpleSwitchHiddenBoxes,
    id_bhvBlueCoinSwitch,
    id_bhvHiddenBlueCoin,
    id_bhvOpenableCageDoor,
    id_bhvOpenableGrill,
    id_bhvWaterLevelDiamond,
    id_bhvInitializeChangingWaterLevel,
    id_bhvTweesterSandParticle,
    id_bhvTweester,
    id_bhvMerryGoRoundBooManager,
    id_bhvAnimatedTexture,
    id_bhvBooInCastle,
    id_bhvBooWithCage,
    id_bhvBalconyBigBoo,
    id_bhvMerryGoRoundBigBoo,
    id_bhvGhostHuntBigBoo,
    id_bhvCourtyardBooTriplet,
    id_bhvBoo,
    id_bhvMerryGoRoundBoo,
    id_bhvGhostHuntBoo,
    id_bhvHiddenStaircaseStep,
    id_bhvBooBossSpawnedBridge,
    id_bhvBbhTiltingTrapPlatform,
    id_bhvHauntedBookshelf,
    id_bhvMeshElevator,
    id_bhvMerryGoRound,
    id_bhvPlaysMusicTrackWhenTouched,
    id_bhvBetaBowserAnchor,
    id_bhvStaticCheckeredPlatform,
    id_bhvUnused2A10,
    id_bhvUnusedFakeStar,
    id_bhvStaticObject,
    id_bhvUnused2A54,
    id_bhvCastleFloorTrap,
    id_bhvFloorTrapInCastle,
    id_bhvTree,
    id_bhvSparkle,
    id_bhvSparkleSpawn,
    id_bhvSparkleParticleSpawner,
    id_bhvScuttlebug,
    id_bhvScuttlebugSpawn,
    id_bhvWhompKingBoss,
    id_bhvSmallWhomp,
    id_bhvWaterSplash,
    id_bhvWaterDroplet,
    id_bhvWaterDropletSplash,
    id_bhvBubbleSplash,
    id_bhvIdleWaterWave,
    id_bhvObjectWaterSplash,
    id_bhvShallowWaterWave,
    id_bhvShallowWaterSplash,
    id_bhvObjectWaveTrail,
    id_bhvWaveTrail,
    id_bhvTinyStrongWindParticle,
    id_bhvStrongWindParticle,
    id_bhvSLSnowmanWind,
    id_bhvSLWalkingPenguin,
    id_bhvYellowBall,
    id_bhvMario,
    id_bhvToadMessage,
    id_bhvUnlockDoorStar,
    id_bhvRandomAnimatedTexture,
    id_bhvYellowBackgroundInMenu,
    id_bhvMenuButton,
    id_bhvMenuButtonManager,
    id_bhvActSelectorStarType,
    id_bhvActSelector,
    id_bhvMovingYellowCoin,
    id_bhvMovingBlueCoin,
    id_bhvBlueCoinSliding,
    id_bhvBlueCoinJumping,
    id_bhvSeaweed,
    id_bhvSeaweedBundle,
    id_bhvBobomb,
    id_bhvBobombFuseSmoke,
    id_bhvBobombBuddy,
    id_bhvBobombBuddyOpensCannon,
    id_bhvCannonClosed,
    id_bhvWhirlpool,
    id_bhvJetStream,
    id_bhvMessagePanel,
    id_bhvSignOnWall,
    id_bhvHomingAmp,
    id_bhvCirclingAmp,
    id_bhvButterfly,
    id_bhvHoot,
    id_bhvBetaHoldableObject,
    id_bhvCarrySomething1,
    id_bhvCarrySomething2,
    id_bhvCarrySomething3,
    id_bhvCarrySomething4,
    id_bhvCarrySomething5,
    id_bhvCarrySomething6,
    id_bhvObjectBubble,
    id_bhvObjectWaterWave,
    id_bhvExplosion,
    id_bhvBobombBullyDeathSmoke,
    id_bhvSmoke,
    id_bhvBobombExplosionBubble,
    id_bhvRespawner,
    id_bhvSmallBully,
    id_bhvBigBully,
    id_bhvBigBullyWithMinions,
    id_bhvSmallChillBully,
    id_bhvBigChillBully,
    id_bhvJetStreamRingSpawner,
    id_bhvJetStreamWaterRing,
    id_bhvMantaRayWaterRing,
    id_bhvMantaRayRingManager,
    id_bhvBowserBomb,
    id_bhvBowserBombExplosion,
    id_bhvBowserBombSmoke,
    id_bhvCelebrationStar,
    id_bhvCelebrationStarSparkle,
    id_bhvStarKeyCollectionPuffSpawner,
    id_bhvLllDrawbridgeSpawner,
    id_bhvLllDrawbridge,
    id_bhvSmallBomp,
    id_bhvLargeBomp,
    id_bhvWfSlidingPlatform,
    id_bhvMoneybag,
    id_bhvMoneybagHidden,
    id_bhvPitBowlingBall,
    id_bhvFreeBowlingBall,
    id_bhvBowlingBall,
    id_bhvTtmBowlingBallSpawner,
    id_bhvBobBowlingBallSpawner,
    id_bhvThiBowlingBallSpawner,
    id_bhvRrCruiserWing,
    id_bhvSpindel,
    id_bhvSslMovingPyramidWall,
    id_bhvPyramidElevator,
    id_bhvPyramidElevatorTrajectoryMarkerBall,
    id_bhvPyramidTop,
    id_bhvPyramidTopFragment,
    id_bhvPyramidPillarTouchDetector,
    id_bhvWaterfallSoundLoop,
    id_bhvVolcanoSoundLoop,
    id_bhvCastleFlagWaving,
    id_bhvBirdsSoundLoop,
    id_bhvAmbientSounds,
    id_bhvSandSoundLoop,
    id_bhvHiddenAt120Stars,
    id_bhvSnowmansBottom,
    id_bhvSnowmansHead,
    id_bhvSnowmansBodyCheckpoint,
    id_bhvBigSnowmanWhole,
    id_bhvBigBoulder,
    id_bhvBigBoulderGenerator,
    id_bhvWingCap,
    id_bhvMetalCap,
    id_bhvNormalCap,
    id_bhvVanishCap,
    id_bhvStar,
    id_bhvStarSpawnCoordinates,
    id_bhvHiddenRedCoinStar,
    id_bhvRedCoin,
    id_bhvBowserCourseRedCoinStar,
    id_bhvHiddenStar,
    id_bhvHiddenStarTrigger,
    id_bhvTtmRollingLog,
    id_bhvLllVolcanoFallingTrap,
    id_bhvLllRollingLog,
    id_bhv1upWalking,
    id_bhv1upRunningAway,
    id_bhv1upSliding,
    id_bhv1Up,
    id_bhv1upJumpOnApproach,
    id_bhvHidden1up,
    id_bhvHidden1upTrigger,
    id_bhvHidden1upInPole,
    id_bhvHidden1upInPoleTrigger,
    id_bhvHidden1upInPoleSpawner,
    id_bhvControllablePlatform,
    id_bhvControllablePlatformSub,
    id_bhvBreakableBoxSmall,
    id_bhvSlidingSnowMound,
    id_bhvSnowMoundSpawn,
    id_bhvWdwSquareFloatingPlatform,
    id_bhvWdwRectangularFloatingPlatform,
    id_bhvJrbFloatingPlatform,
    id_bhvArrowLift,
    id_bhvOrangeNumber,
    id_bhvMantaRay,
    id_bhvFallingPillar,
    id_bhvFallingPillarHitbox,
    id_bhvPillarBase,
    id_bhvJrbFloatingBox,
    id_bhvDecorativePendulum,
    id_bhvTreasureChestsShip,
    id_bhvTreasureChestsJrb,
    id_bhvTreasureChests,
    id_bhvTreasureChestBottom,
    id_bhvTreasureChestTop,
    id_bhvMips,
    id_bhvYoshi,
    id_bhvKoopa,
    id_bhvKoopaRaceEndpoint,
    id_bhvKoopaFlag,
    id_bhvPokey,
    id_bhvPokeyBodyPart,
    id_bhvSwoop,
    id_bhvFlyGuy,
    id_bhvGoomba,
    id_bhvGoombaTripletSpawner,
    id_bhvChainChomp,
    id_bhvChainChompChainPart,
    id_bhvWoodenPost,
    id_bhvChainChompGate,
    id_bhvWigglerHead,
    id_bhvWigglerBody,
    id_bhvEnemyLakitu,
    id_bhvCameraLakitu,
    id_bhvCloud,
    id_bhvCloudPart,
    id_bhvSpiny,
    id_bhvMontyMole,
    id_bhvMontyMoleHole,
    id_bhvMontyMoleRock,
    id_bhvPlatformOnTrack,
    id_bhvTrackBall,
    id_bhvSeesawPlatform,
    id_bhvFerrisWheelAxle,
    id_bhvFerrisWheelPlatform,
    id_bhvWaterBombSpawner,
    id_bhvWaterBomb,
    id_bhvWaterBombShadow,
    id_bhvTTCRotatingSolid,
    id_bhvTTCPendulum,
    id_bhvTTCTreadmill,
    id_bhvTTCMovingBar,
    id_bhvTTCCog,
    id_bhvTTCPitBlock,
    id_bhvTTCElevator,
    id_bhvTTC2DRotator,
    id_bhvTTCSpinner,
    id_bhvMrBlizzard,
    id_bhvMrBlizzardSnowball,
    id_bhvSlidingPlatform2,
    id_bhvOctagonalPlatformRotating,
    id_bhvAnimatesOnFloorSwitchPress,
    id_bhvActivatedBackAndForthPlatform,
    id_bhvRecoveryHeart,
    id_bhvWaterBombCannon,
    id_bhvCannonBarrelBubbles,
    id_bhvUnagi,
    id_bhvUnagiSubobject,
    id_bhvDorrie,
    id_bhvHauntedChair,
    id_bhvMadPiano,
    id_bhvFlyingBookend,
    id_bhvBookendSpawn,
    id_bhvHauntedBookshelfManager,
    id_bhvBookSwitch,
    id_bhvFirePiranhaPlant,
    id_bhvSmallPiranhaFlame,
    id_bhvFireSpitter,
    id_bhvFlyguyFlame,
    id_bhvSnufit,
    id_bhvSnufitBalls,
    id_bhvHorizontalGrindel,
    id_bhvEyerokBoss,
    id_bhvEyerokHand,
    id_bhvKlepto,
    id_bhvBird,
    id_bhvRacingPenguin,
    id_bhvPenguinRaceFinishLine,
    id_bhvPenguinRaceShortcutCheck,
    id_bhvCoffinSpawner,
    id_bhvCoffin,
    id_bhvClamShell,
    id_bhvSkeeter,
    id_bhvSkeeterWave,
    id_bhvSwingPlatform,
    id_bhvDonutPlatformSpawner,
    id_bhvDonutPlatform,
    id_bhvDDDPole,
    id_bhvRedCoinStarMarker,
    id_bhvTripletButterfly,
    id_bhvBubba,
    id_bhvBeginningLakitu,
    id_bhvBeginningPeach,
    id_bhvEndBirds1,
    id_bhvEndBirds2,
    id_bhvIntroScene,
    id_bhv_max_count // must be the last in the list
};

enum BehaviorId get_id_from_behavior(const BehaviorScript* behavior);
const BehaviorScript* get_behavior_from_id(enum BehaviorId id);

#endif
