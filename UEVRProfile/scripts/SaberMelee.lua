local uevrUtils = require("libs/uevr_utils")
require(".\\Subsystems\\UEHelper")
require(".\\Trackers\\Trackers")
require(".\\Subsystems\\MeleePower")

local api = uevr.api
local vr = uevr.params.vr
--local utils=require(".\\libs\\uevr_utils")

function find_required_object(name)
    local obj = uevr.api:find_uobject(name)
    if not obj then
        error("Cannot find " .. name)
        return nil
    end

    return obj
end

function find_static_class(name)
    local c = find_required_object(name)
    return c:get_class_default_object()
end

kismetStringLib= find_static_class("Class /Script/Engine.KismetStringLibrary")
--:Conv_StringToName(str)


local player= api:get_player_controller(0)
local pawn= api:get_local_pawn(0)
local hitresult_c = find_required_object("ScriptStruct /Script/Engine.HitResult")
local DmgType_c=find_required_object("ScriptStruct /Script/RsGameTechRT.RsDamageParams")
local LocVec1 = Vector3f.new(0, 0, 0)
local LocVec2 = Vector3f.new(0, 0, 0)
--local LocVec3 = pawn:GetActorUpVector()*1000
--local LocVec4 = pawn:K2_GetActorLocation()
local Dmg = find_required_object("DMG_Stagger_Light_C /Game/GlobalData/Damage/DMG_Stagger_Light.Default__DMG_Stagger_Light_C")
local DmgTypeClass= find_required_object("BlueprintGeneratedClass /Game/GlobalData/Damage/DMG_Stagger.DMG_Stagger_C")
local game_engine_class = find_required_object("Class /Script/Engine.GameEngine")
local reusable_hit_result = StructObject.new(hitresult_c)



local reusable_DmgParam= StructObject.new(DmgType_c)
reusable_DmgParam.HitEvent.AttackType=kismetStringLib:Conv_StringToName("Enum_AttackType::NewEnumerator0")--AttackType			Name
reusable_DmgParam.HitEvent.BlockDepleteLevel =1	--	Enum
reusable_DmgParam.HitEvent.BlockLevel= 1			--BlockLevel			Enum
reusable_DmgParam.HitEvent.BlockReactAngleCos=0.5--BlockReactAngleCos	Float
reusable_DmgParam.HitEvent.DamageFriendlies=false--DamageFriendlies		Bool
reusable_DmgParam.HitEvent.DamageLevel=1			--DamageLevel			Enum
reusable_DmgParam.HitEvent.DamageTypeClass=DmgTypeClass						--DamageTypeClass		Class
reusable_DmgParam.HitEvent.HeroDamageFactor=1	--HeroDamageFactor		Float
--reusable_DmgParam.						--HitImpulse			StructProp
--reusable_DmgParam.						--HitPause				StructProp 			
reusable_DmgParam.HitEvent.NoDamageInSlowdown=false						--NoDamageinSlowdown	bool
reusable_DmgParam.HitEvent.SingleHit=true						--SingleHit				bool
reusable_DmgParam.HitEvent.Undodgeable=true						--Undodgable			bool
--reusable_DmgParam.						--UniquHitID			Int
--reusable_DmgParam.						--unparryable			bool


local Out=0
local GameplayStatics=find_required_object("RsGameplayStatics /Script/RsGameTechRT.Default__RsGameplayStatics")
local GameplayStDef= find_required_object("GameplayStatics /Script/Engine.Default__GameplayStatics")
--GameplayStDef:ApplyDamage(pawn,20)--,nil,nil,Dmg,Out)
--local HP=GameplayStatics:GetHealth(pawn)
--print(HP)

local function UpdateLightsaberMarkTracing(pawn_c)
	if pawn==nil then return end
if pawn_c.LightsaberChild_01.ExtendDir> 0 then	
	pawn_c.LightsaberChild_01.SwLightsaberMarks:StartTracing()
else pawn_c.LightsaberChild_01.SwLightsaberMarks:StopTracing()
end


end
local kismet_system_library = find_static_class("Class /Script/Engine.KismetSystemLibrary")

local UGameplayStatics_library= find_static_class("Class /Script/Engine.GameplayStatics")
local game_engine_class = find_required_object("Class /Script/Engine.GameEngine")
local zero_color = nil
local color_c = find_required_object("ScriptStruct /Script/CoreUObject.LinearColor")
local    actor_c = find_required_object("Class /Script/Engine.Actor")
local zero_color = StructObject.new(color_c)



local bComps={}
local ActorClass= find_static_class("Class /Script/Engine.Actor")
local ToggleSaber=false
local CurrentSaberStatus=false
local LastTarget=nil
--local SFX= find_required_object("PostProcessComponent /Temp/Persistent_4.Persistent_4.PersistentLevel.BPFX_Damage_C_2147480977.DamageFXPostProcess")

local AttackSwipe_C= find_static_class("BlueprintGeneratedClass /Game/GlobalData/DynamicDeformation/Effects/notify_Hero_Swipe.notify_Hero_Swipe_C")
local Swip_C_Array= UEVR_UObjectHook.get_objects_by_class(AttackSwipe_C,false)
local AttackAnimMontage = find_required_object("AnimMontage /Game/Characters/Hero/Animation/Combat/Attacks/Base/hero_ATT_Saber_01_Montage.hero_ATT_Saber_01_Montage")
local AnimData= find_required_object("ScriptStruct /Script/RsGameTechRT.RsCharacterAnimationData")
local AnimData_new= StructObject.new(AnimData)
--AnimData_new.
local arrayTag = find_required_object("BP_Hero_AttackDescription_Basic_Saber_C /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Basic_Saber.Default__BP_Hero_AttackDescription_Basic_Saber_C")
local EmitterTest=find_required_object("Class /Script/Engine.ParticleEmitter")

--local K=find_required_object("Emitter /Game/Levels/Bogano/BOG200/SubLevels/BOG200_Ent.BOG200_Ent.PersistentLevel.P_WelderSparks3")

local game_engine = UEVR_UObjectHook.get_first_object_by_class(game_engine_class)
local viewport = game_engine.GameViewport
local world = viewport.World
local var1=0
local Sphere_C= find_required_object("Class /Script/Engine.SphereComponent")
local Capsule_C= find_required_object("Class /Script/Engine.CapsuleComponent")



		--api:spawn_object(EmitterTest, K)
--local testEMitter=	GameplayStDef:SpawnEmitterAttached(K, pawn.Mesh,"Root",Vector3d.new(0,0,90),Vector3d.new(0,0,0),Vector3d.new(10000,10000,10000),0,true)--,Diff_Rotator_HR,pawn.Mesh:K2_GetComponentLocation(),1,false)
uevr.sdk.callbacks.on_pre_engine_tick(
function(engine, delta)
	pawn= api:get_local_pawn(0)
	local SphereComponents= UEVR_UObjectHook.get_objects_by_class(Sphere_C,false)
		for i, comp in ipairs(SphereComponents) do
			if comp:get_fname():to_string() == "Collision" then
			--print(comp:get_full_name())
			comp:SetHiddenInGame(false,true)
			comp:SetVisibility(true)
			comp.SphereRadius=50
			comp:SetCollisionEnabled(1)
			comp:SetGenerateOverlapEvents(true)
			end
		end	
	local CapsuleComponents= UEVR_UObjectHook.get_objects_by_class(Capsule_C,false)		
			
		for i, comp in ipairs(CapsuleComponents) do
			if comp:get_fname():to_string() == "DeflectionCapsule" then
			--print(comp:get_fname():to_string())
			--comp:SetHiddenInGame(false,true)
			--comp:SetVisibility(1)
			comp.CapsuleRadius=60
			--comp.CapsuleHalfHeight=1
			end
			if comp:get_fname():to_string() == "weaponCollision" then
				comp:SetCollisionEnabled(1)
				comp:SetGenerateOverlapEvents(true)
				comp.BodyInstance.CollisionResponses.ResponseToChannels.WorldStatic=1
				--comp:GetOwner():BlockEnemyAttack()
			end
		end	
		
	--print(world:get_full_name())
		UpdateLightsaberMarkTracing(pawn)
		
		local _Comps={}
		if pawn ~=nil then
			if pawn.weaponCollision.bGenerateOverlapEvents == false then
				pawn.weaponCollision:SetGenerateOverlapEvents(true)
			end
			pawn.weaponCollision:GetOverlappingComponents(_Comps)
			local check= pawn.weaponCollision:IsOverlappingActor(Component)
			pawn.weaponCollision:SetCollisionEnabled(1)
			--print(pawn.weaponCollision:GetCollisionProfileName())
			--if pawn.weaponCollision:GetCollisionProfileName()~= (uevrUtils.fname_from_string("BulletProjectiles")) then
				--pawn.weaponCollision:SetCollisionProfileName(uevrUtils.fname_from_string("BulletProjectiles"))
			--	pawn.weaponCollision:SetCollisionEnabled(1)
			--end
			pawn.weaponCollision:SetCollisionResponseToAllChannels(1)
			pawn.weaponCollision:SetCollisionObjectType(0)
			--Wpn= find_required_object("CapsuleComponent /Game/Levels/Zeffo/VerticalSlice/VSL100/SubLevels/VSL100_AI.VSL100_AI.PersistentLevel.BP_Grunt00_C_2147371926.weaponCollision")
			--Wpn:SetCollisionEnabled(1)
			pawn.weaponCollision.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel6=1
		end
		--print(pawn.Mesh:GetCollisionObjectType())
		
		--print(LastTarget)
	if isSaberExtended then	
		for i, comp in ipairs(_Comps) do
			--print(comp:get_fname():to_string())
			if string.find(comp:GetOwner():get_fname():to_string(), "Blaster") or string.find(comp:get_fname():to_string(), "weaponCollision") then
				--print(comp:get_fname():to_string())
				if string.find(comp:GetOwner():get_fname():to_string(), "Blaster") then
					comp.CapsuleRadius=100
				end
				 
				pawn.HC_Defense:call("Block Pressed")
				--pawn.HC_Defense:call("Block Released")
				--pawn.HC_Defense:
			end
			
			
			if comp:GetOwner() ~= nil and not string.find(comp:GetOwner():get_fname():to_string(),"Hero") and not string.find(comp:GetOwner():get_fname():to_string(),"Blaster") and not string.find(comp:GetOwner():get_fname():to_string(),"Volume") then
				--print(comp:GetOwner():get_fname():to_string())
				--print("next")
				if  LastTarget == nil then
					--GameplayStDef:ApplyDamage(comp:GetOwner(),50,nil,pawn,DmgTypeClass)
					
					local Damage = PosDiffWeaponHand/25 *50
					--pawn.HC_Defense:EnterBlock(false,0)
					--pawn.HC_Defense:ExitBlock()
					if PosDiffWeaponHand<5 then
					--comp:GetOwner().SwAIDefense:StartBlock(pawn,false,1)
					--comp:GetOwner().SwAIDefense:BlockContact(pawn)
					--	GameplayStatics:RsApplyDamage(comp:GetOwner(),comp,2,nil,pawn,nil,reusable_DmgParam,var1)
					else
					if comp:GetOwner().bCanBlock then
						comp:GetOwner().SwAIDefense:StartBlock(pawn,false,1)
						comp:GetOwner().SwAIDefense:BlockContact(pawn)
					end	
					GameplayStatics:RsApplyDamage(comp:GetOwner(),comp,Damage,nil,pawn,DmgTypeClass,reusable_DmgParam,var1)
					
					end
					--arrayTag:OnBeginAttack(pawn)
					--arrayTag:OnDealtAnyDamage(pawn,50,reusable_DmgParam,comp:GetOwner(),pawn)
					--arrayTag:OnEndAttack(pawn)
					--print("yay")
				end
			--local DmgActor=comp:GetOwner()
			--if DmgActor~=nil then
			--		
			
			LastTarget = comp:GetOwner()
			-- wdprint(LastTarget:get_fname():to_string())
			--print(comp:get_fname():to_string())
			end
		end
		--print(#(_Comps))
		if #(_Comps) ==0 then
			LastTarget=nil
			
		end
		
	end	
		
		
		--print(" ")
		--print(" ")
		--print(" ")
end)




uevr.sdk.callbacks.on_xinput_get_state(
function(retval, user_index, state)



end)