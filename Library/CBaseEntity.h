#pragma once
#include "vector.h"

enum OverlayFlags_t : unsigned long long
{
	BBOX = (1 << 2), //4
	ABSBOX = (1 << 5),//32
	RBOX = (1 << 6), //64
	ENTITYBOUNDS = (1 << 7), //128 - Looks like it depends on a byte being set in the class.
	ENTITYATTACHMENTS = (3 << 8), //BYTE1(flags) & 3
	ENTITYJOINTINFO = 0x40000,
	ENTITYSKELETON = (24 << 8), //BYTE1(flags) & 24 // kinda slow.
	ENTITYHITBOXES = (192 << 8), //BYTE1(flags) & 192
	BUDDHA = 0x40000000,
	ENTITYVIEWOFFSET = 0x800000000
};

enum DOTATeam_t : int {
	DOTA_TEAM_INVALID = -1,
	DOTA_TEAM_FIRST = 2,
	DOTA_TEAM_GOODGUYS = 2, //Radiant team.
	DOTA_TEAM_BADGUYS = 3, 	//Dire team.
	DOTA_TEAM_NEUTRALS = 4, //Neutral.
	DOTA_TEAM_NOTEAM = 5,
	DOTA_TEAM_CUSTOM_1 = 6,
	DOTA_TEAM_CUSTOM_MIN = 6,
	DOTA_TEAM_CUSTOM_2 = 7,
	DOTA_TEAM_CUSTOM_3 = 8,
	DOTA_TEAM_CUSTOM_COUNT = 8,
	DOTA_TEAM_CUSTOM_4 = 9,
	DOTA_TEAM_CUSTOM_5 = 10,
	DOTA_TEAM_CUSTOM_6 = 11,
	DOTA_TEAM_CUSTOM_7 = 12,
	DOTA_TEAM_CUSTOM_8 = 13,
	DOTA_TEAM_CUSTOM_MAX = 13,
	DOTA_TEAM_COUNT = 14
};

#include "Datamap.h"
#include "CEntityInstance.h"
#include "CSource2Client.h"
#define SpatializationInfo_t char
#define IPhysicsObject char
#define CCollisionProperty char

class CBaseEntity : public CEntityInstance
{
public:
	virtual Datamap* GetPredDescMap(); // 26, 
	virtual CCollisionProperty* GetCollideable(); // 27, 
	virtual void GetPredictionCopyable(); // 28, 
	virtual void YouForgotToImplementOrDeclareClientClass(); // 29, 
	virtual ClientClass* GetClientClass(); // 30, 
	virtual void SpawnShared(); // 31, 
	virtual void PopulatePoseParameters(); // 32, 
	virtual void PreFirstNetworkUpdate(); // 33, 
	virtual void GetBaseModelEntity(); // 34, 
	virtual void GetBaseAnimating(); // 35, 
	virtual void n_36(); // 36, 
	virtual void n_37(); // 37, 
	virtual void Classify(); // 38, 
	virtual void ModifyEconParticles(); // 39, 
	virtual void ShouldSavePhysics(); // 40, 
	virtual void GetShadowDrawMaterial(); // 41, 
	virtual bool IsAbleToHaveFireEffect(); // 42, 
	virtual bool IsSelectable(); // 43, 
	virtual bool ReceivesMouseoverButNotSelection(); // 44, 
	virtual float GetRingRadius(); // 45, 
	virtual void UpdateFlexControllers(); // 46, 
	virtual void SetupWeights(); // 47, 
	virtual void GetVectors(); // 48, 
	virtual void WorldAlignMins(); // 49, 
	virtual void WorldAlignMaxs(); // 50, 
	virtual void WorldSpaceCenter(); // 51, 
	virtual void ComputeWorldSpaceSurroundingBox(); // 52, 
	virtual void UpdateTransmitState(); // 53, 
	virtual void ValidateModelIndex(); // 54, 
	virtual void AsParticleEHandle(); // 55, 
	virtual void OnNewParticleEffect(); // 56, 
	virtual void OnParticleEffectDeleted(); // 57, 
	virtual void PredCopy_SetHeapSize(); // 58, 
	virtual void PredCopy_GetStructBase(); // 59, 
	virtual void PredCopy_GetOffsetType(); // 60, 
	virtual void PredCopy_SetCommand(); // 61, 
	virtual void PredCopy_GetCommand(); // 62, 
	virtual void PredCopy_Alloc(); // 63, 
	virtual void PredCopy_Tell(); // 64, 
	virtual void PredCopy_GetHeaderBlock(); // 65, 
	virtual void GetMouth(); // 66, 
	virtual void GetSoundSpatialization(); // 67, 
	virtual void LookupAttachment(const char* name); // 68, 
	virtual void GetAttachment(unsigned char, matrix3x4_t &); // 69, 
	virtual void InvalidateAttachments(); // 70, 
	virtual void OnBoneTransformsChanged(); // 71, 
	virtual void ChangeTeam(DOTATeam_t team); // 72, 
	virtual bool InSameTeam(CBaseEntity *other); // 73, 
	virtual bool InLocalTeam(void); // 74, 
	virtual void DrawDebugTextOverlays(); // 75, 
	virtual bool IsValidIDTarget(); // 76, 
	virtual const char* GetIDString(); // 77, 
	virtual bool IsPotentiallyUsable(); // 78, 
	virtual const char* GetUseString(); // 79, 
	virtual void IsAbleToGlow(); // 80, 
	virtual void GetUseType(); // 81, 
	virtual void* GetGlowEntity(); // 82, 
	virtual void IsSaveNonNetworkable(); // 83, 
	virtual void UpdateVisibility(); // 84, 
	virtual void n_85(); // 85, 
	virtual void n_86(); // 86, 
	virtual void n_87(); // 87, 
	virtual void n_88(); // 88, 
	virtual void n_89(); // 89, 
	virtual void ShouldDraw(); // 90, 
	virtual void Simulate(); // 91, 
	virtual void FrameSimulate(); // 92, 
	virtual void OnDataChanged(); // 93, 
	virtual void OnPreDataChanged(); // 94, 
	virtual void ShouldTransmit(); // 95, 
	virtual void GetClientVehicle(); // 96, 
	virtual void OverrideAlphaModulation(); // 97, 
	virtual void OverrideShadowAlphaModulation(); // 98, 
	virtual void ComputeClientSideReplacementModel(); // 99, 
	virtual void Interpolate(); // 100, 
	virtual void CreateLightEffects(); // 101, 
	virtual void Clear(); // 102, 
	virtual void GetTextureAnimationStartTime(); // 103, 
	virtual void TextureAnimationWrapped(); // 104, 
	virtual void ShadowCastType(); // 105, 
	virtual void ShouldReceiveProjectedTextures(); // 106, 
	virtual void AddDecal(); // 107, 
	virtual void OnTakeDamage(); // 108, 
	virtual void TakeDamage(); // 109, 
	virtual void GetPredictionOwner(); // 110, 
	virtual void InitPredictable(); // 111, 
	virtual void SetPredictable(bool); // 112, 
	virtual void DecalTrace(); // 113, 
	virtual void ImpactTrace(); // 114, 
	virtual bool ShouldPredict(); // 115, 
	virtual void PreRender(); // 116, 
	virtual const char* GetPlayerName_0(); // 117, 
	virtual void GetUsePriority(); // 118, 
	virtual void EstimateAbsVelocity(); // 119, 
	virtual void CanBePoweredUp(); // 120, 
	virtual void AttemptToPowerup(); // 121, 
	virtual void IsCurrentlyTouching(); // 122, 
	virtual void ClientThink(); // 123, 
	virtual void GetThinkHandle(); // 124, 
	virtual void SetThinkHandle(); // 125, 
	virtual void SetNextClientThink(); // 126, 
	virtual void PhysicsSimulate(); // 127, 
	virtual void SimulateThinkInterval(); // 128, 
	virtual void PhysicsSolidMaskForEntity(); // 129, 
	virtual void* ClothGetEntityInstanceSettings(); // 130, 
	virtual void NotifySystemEvent(); // 131, 
	virtual void SUB_Remove(); // 132, 
	virtual void ExtraSceneObjectUpdater(); // 133, 
	virtual void FireBullets(); // 134, RagdollImpact
	virtual void DoImpactEffect(); // 135, 
	virtual void MakeTracer(); // 136, 
	virtual void GetTracerAttachment(); // 137, 
	virtual void GetTracerType(); // 138, 
	virtual void GetBeamTraceFilter(); // 139, 
	virtual void DispatchTraceAttack(); // 140, 
	virtual void TraceAttack(); // 141, 
	virtual void n_142(); // 142, 
	virtual bool ShouldDrawWaterImpacts(); // 143, 
	virtual bool ShouldDrawUnderwaterBulletBubbles(); // 144, 
	virtual void HandleShotImpactingWater(); // 145, STR: gunshotsplash
	virtual void BloodColor(); // 146, 
	virtual void n_147(); // 147, 
	virtual bool IsPlayer(); // 148, 
	virtual bool IsHMDAvatar(); // 149, 
	virtual void n_150(); // 150, 
	virtual bool IsBaseCombatCharacter(); // 151, 
	virtual void* MyCombatCharacterPointer(); // 152, 
	virtual void* MyCombatCharacterPointer2(); // 153, 
	virtual bool IsBaseCombatWeapon(); // 154, 
	virtual void* MyCombatWeaponPointer(); // 155, 
	virtual bool IsBaseObject(); // 156, 
	virtual bool IsBaseTrain(); // 157, 
	virtual bool IsNextBot(); // 158, 
	virtual void* MyInfectedPointer(); // 159, 
	virtual void* MyInfectedRagdollPointer(); // 160, 
	virtual bool IsSprite(); // 161, 
	virtual int GetMaxHealth(); // 162, 
	virtual void SetHealth(int); // 163, 
	virtual int GetHealth(); // 164, 
	virtual int GetActualHealth(); // 165, 
	virtual void ModifyOrAppendCriteria(); // 166, 
	virtual void WantSpawnCallOnPreData(); // 167, 
	virtual void EyePosition(); // 168, 
	virtual void EyeAngles(); // 169, 
	virtual void LocalEyeAngles(); // 170, 
	virtual void EarPosition(); // 171, 
	virtual void GetFriction(); // 172, 
	virtual void GetViewOffset(); // 173, 
	virtual void GetSmoothedVelocity(); // 174, 
	virtual void GetVelocity(); // 175, 
	virtual void IsMoving(); // 176, 
	virtual void OnGroundChanged(); // 177, 
	virtual void GetGroundVelocityToApply(); // 178, 
	virtual void GetAttackDamageScale(); // 179, 
	virtual void InternalSetEffects(); // 180, 
	virtual void ShouldInterpolate(); // 181, 
	virtual void GetS1Skin(); // 182, 
	virtual void BoneMergeFastCullBloat(); // 183, 
	virtual void GetAimEntOrigin(); // 184, 
	virtual void SetupBones(); // 185, 
	virtual void AddRagdollToFadeQueue(); // 186, 
	virtual void OnLeftClick(); // 187, 
	virtual void OnRightClick(); // 188, 
	virtual void OnCursorEntered(); // 189, 
	virtual void OnCursorExited(); // 190, 
	virtual void GetSelection(); // 191, 
	virtual void GenericSelectionGetClickValidBehaviors(); // 192, 
	virtual void PerformCustomPhysics(); // 193, 
	virtual void GetRenderOrigin(); // 194, 
	virtual void GetRenderAngles(); // 195, 
	virtual void GetObserverCamOrigin(); // 196, 
	virtual void RenderableToWorldTransform(); // 197, 
	virtual void DrawModel(); // 198, 
	virtual void GetRenderBounds(); // 199, 
	virtual void GetRenderBoundsWorldspace(); // 200, 
	virtual void n_201(); // 201, 
	virtual void n_202(); // 202, 
	virtual void n_203(); // 203, 
	virtual void n_204(); // 204, 
	virtual void n_205(); // 205, 
	virtual void Release(); // 206, 
	virtual void OnParseMapDataFinished(); // 207, 
	virtual void NotifyShouldTransmit(); // 208, 
};