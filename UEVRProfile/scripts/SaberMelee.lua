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
	
	if isSaber1Extended then	
		pawn_c.LightsaberChild_01.SwLightsaberMarks:StartTracing()
	else pawn_c.LightsaberChild_01.SwLightsaberMarks:StopTracing()
	end
	
	if isSaber2Extended then
		pawn_c.LightsaberChild_02.SwLightsaberMarks:StartTracing()
	else pawn_c.LightsaberChild_02.SwLightsaberMarks:StopTracing()
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
local LastComp=nil
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


local isBlock=false
local isNewEvent=false
local DeltaBlock=0

local AlreadyBlockedArray= {}
local LastBlockedElement=nil



local function UpdateBlockStatus(delta,pawn)
	if pawn==nil then return end
	if isBlock then
		if isNewEvent then
			DeltaBlock=0
			isNewEvent=false
		end
		DeltaBlock=DeltaBlock+delta
		pawn.HC_Defense:call("Block Pressed")
	end
	if DeltaBlock > 0.2 then
		isBlock=false
		DeltaBlock=0
	end
	if isBlock==false then
		pawn.HC_Defense:call("Block Released")
	end
end

--Game Settings:
local AtStProj=nil
local ProjCannon_C= find_required_object("Class /Script/Engine.ProjectileMovementComponent")

--
local function UpdateBasicGameStatistics()
	local ProjMovementArray=UEVR_UObjectHook.get_objects_by_class(ProjCannon_C,true)
	
	--if AtStProj.MaxSpeed ==nil then
	--	AtStProj=nil
	--end
	AtStProj=nil
	
	if AtStProj==nil then
--		AtStProj=nil
		for i, comp in ipairs(ProjMovementArray) do
			if string.find(comp:get_full_name(),"Default__BP_blasterCannonProjectile_C") then
				AtStProj=comp
			end
		end
		if AtStProj~=nil then
			AtStProj.MaxSpeed=3500	
		end
--			AtStProj= "ProjectileMovementComponent /Game/Characters/ATST00/Misc/BP_blasterCannonProjectile.Default__BP_blasterCannonProjectile_C.ProjectileMovement")
		
	end	
		--AtStProj.MaxSpeed=3500
end
local StartKickCounter=false
local KickCounter=0		
		--api:spawn_object(EmitterTest, K)
--local testEMitter=	GameplayStDef:SpawnEmitterAttached(K, pawn.Mesh,"Root",Vector3d.new(0,0,90),Vector3d.new(0,0,0),Vector3d.new(10000,10000,10000),0,true)--,Diff_Rotator_HR,pawn.Mesh:K2_GetComponentLocation(),1,false)

local function UpdateKickCounter(delta)
	if StartKickCounter then
		KickCounter=KickCounter+delta
	end
	if KickCounter>1 then
		StartKickCounter=false
		KickCounter=0
	end
end


		


uevr.sdk.callbacks.on_pre_engine_tick(
function(engine, delta)



	pawn= api:get_local_pawn(0)
	UpdateBasicGameStatistics()
	UpdateLightsaberMarkTracing(pawn)



	local SphereComponents= UEVR_UObjectHook.get_objects_by_class(Sphere_C,false)
		for i, comp in ipairs(SphereComponents) do
			if comp:get_fname():to_string() == "Collision" then
			--	comp.ShapeBodySetup.CollisionReponse=1
			local SpherePar=uevr.api:find_uobject("SphereComponent /Game/Items/Blaster/Projectile_Blaster_Parent.Projectile_Blaster_Parent_C.Collision_GEN_VARIABLE")
			if SpherePar ~=nil then
				SpherePar.SphereRadius=40
			end
			
			
			--print(comp:get_full_name())
			--comp:SetHiddenInGame(false,true)
			--comp:SetVisibility(true)
			comp:SetCollisionEnabled(1)
				
			comp:SetGenerateOverlapEvents(true)
			--comp:SetCollisionObjectType(24)
			--comp.CapsuleHalfHeight=1
			--comp:SetCollisionEnabled(1)
			comp:SetCollisionResponseToAllChannels(1)
			--comp:SetCollisionResponseToChannel(0, 1)
			--comp:SetCollisionResponseToChannel(1, 1)
			--comp:SetCollisionResponseToChannel(2, 0)
			--comp:SetCollisionResponseToChannel(3, 0)
			--comp:SetCollisionResponseToChannel(4, 0)
			--comp:SetCollisionResponseToChannel(5, 0)
			--comp:SetCollisionResponseToChannel(6, 0)
			--comp:SetCollisionResponseToChannel(7, 0)
			--comp:SetCollisionResponseToChannel(8, 0)
			--comp:SetCollisionResponseToChannel(9, 0)
			--comp:SetCollisionResponseToChannel(10,0)
			--comp:SetCollisionResponseToChannel(11,0)
			--comp:SetCollisionResponseToChannel(12,0)
			--comp:SetCollisionResponseToChannel(13,0)
			--comp:SetCollisionResponseToChannel(14,0)
			--comp:SetCollisionResponseToChannel(15,0)
			--comp:SetCollisionResponseToChannel(16,0)
			--comp:SetCollisionResponseToChannel(17,0)
			--comp:SetCollisionResponseToChannel(18,0)
			--comp:SetCollisionResponseToChannel(19,1) --GametraceCh3
			--comp:SetCollisionResponseToChannel(20,0)
			--comp:SetCollisionResponseToChannel(21,0)
			--comp:SetCollisionResponseToChannel(22,0)
			--comp:SetCollisionResponseToChannel(23,1) -- GametraceCh7
			--comp:SetCollisionResponseToChannel(24,0)
			--comp:SetCollisionResponseToChannel(25,0)
			--comp:SetCollisionResponseToChannel(26,0)
			--comp:SetCollisionResponseToChannel(27,0)
			--comp:SetCollisionResponseToChannel(28,0)
			--comp:SetCollisionResponseToChannel(29,0)
		--	comp.BodyInstance.CollisionResponses.ResponseArray[1]=1--={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
					--comp.SphereRadius=50
				--end
			
			--comp:SetGenerateOverlapEvents(true)
			end
		end	
		--for j, un in ipairs(AlreadyBlockedArray) do
		--	if un ~= nil then
		--	print(un:get_fname():to_string())
		--		--if un.SphereRadius ~=nil then
					
		--		--	table.remove(AlreadyBlockedArray, j)
		--		--end
		--	end
		--end
		
		local capsPar=nil 
		--pcall(function()
		--capsPar=uevr.api:find_uobject("CapsuleComponent /Game/Items/Blaster/Projectile_Blaster_Parent.Projectile_Blaster_Parent_C.DeflectionCapsule_GEN_VARIABLE")
		--end)
		
		if capsPar ~=nil then
			capsPar.CapsuleRadius=40
		end
	local CapsuleComponents= UEVR_UObjectHook.get_objects_by_class(Capsule_C,false)		
			
		for i, comp in ipairs(CapsuleComponents) do
			if comp:get_fname():to_string() == "DeflectionCapsule" then
			--print(comp:get_fname():to_string())
			--comp:SetHiddenInGame(true,true)
			--comp:SetVisibility(0)
			--	capsPar=uevr.api:find_uobject("CapsuleComponent /Game/Items/Blaster/Projectile_Blaster_Parent.Projectile_Blaster_Parent_C.DeflectionCapsule_GEN_VARIABLE")
			--	if capsPar ~=nil then
			--		capsPar.CapsuleRadius=40
			--	end
			--comp.CapsuleRadius=5
			--if comp.BoundsScale==1.001 then
			--		comp.SphereRadius=100
			--		comp:SetCollisionEnabled(3)
			--end
			--comp:SetGenerateOverlapEvents(true)
			--comp:SetCollisionObjectType(24)
			--comp.CapsuleHalfHeight=5
			--print(comp.ShapeBodySetup.AggGeom["BoxElems"])
			--comp:SetCollisionEnabled(1)
			--comp:SetCollisionResponseToAllChannels(1)
			--comp:SetCollisionResponseToChannel(0, 1)
			--comp:SetCollisionResponseToChannel(1, 1)
			--comp:SetCollisionResponseToChannel(2, 0)
			--comp:SetCollisionResponseToChannel(3, 0)
			--comp:SetCollisionResponseToChannel(4, 0)
			--comp:SetCollisionResponseToChannel(5, 0)
			--comp:SetCollisionResponseToChannel(6, 0)
			--comp:SetCollisionResponseToChannel(7, 0)
			--comp:SetCollisionResponseToChannel(8, 0)
			--comp:SetCollisionResponseToChannel(9, 0)
			--comp:SetCollisionResponseToChannel(10,0)
			--comp:SetCollisionResponseToChannel(11,0)
			--comp:SetCollisionResponseToChannel(12,0)
			--comp:SetCollisionResponseToChannel(13,0)
			--comp:SetCollisionResponseToChannel(14,0)
			--comp:SetCollisionResponseToChannel(15,0)
			--comp:SetCollisionResponseToChannel(16,0)
			--comp:SetCollisionResponseToChannel(17,0)
			--comp:SetCollisionResponseToChannel(18,0)
			--comp:SetCollisionResponseToChannel(19,1) --GametraceCh3
			--comp:SetCollisionResponseToChannel(20,0)
			--comp:SetCollisionResponseToChannel(21,0)
			--comp:SetCollisionResponseToChannel(22,0)
			--comp:SetCollisionResponseToChannel(23,1) -- GametraceCh7
			--comp:SetCollisionResponseToChannel(24,0)
			--comp:SetCollisionResponseToChannel(25,0)
			--comp:SetCollisionResponseToChannel(26,0)
			--comp:SetCollisionResponseToChannel(27,0)
			--comp:SetCollisionResponseToChannel(28,0)
			--comp:SetCollisionResponseToChannel(29,0)
			
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.WorldStatic=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.Visibility=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.Pawn=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.PhysicsBody=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.ActorCollisionQuery=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.ActorCollisionQuery=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.ActorTopologyQuery=1
		--	--comp:SetCollisionResponseToAllChannels(1)
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel1=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel2=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel3=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel4=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel5=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel6=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel7=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel8=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel9=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel10=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel11=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel12=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel13=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel14=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel15=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel1=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel2=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel3=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel4=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel5=1
		--	comp.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel6=1
			
			
			end
			if comp:get_fname():to_string() == "weaponCollision" then
				comp:SetCollisionEnabled(1)
				comp:SetGenerateOverlapEvents(true)
				comp.BodyInstance.CollisionResponses.ResponseToChannels.WorldStatic=1
				--comp:GetOwner():BlockEnemyAttack()
			end
		end	
		
	--print(world:get_full_name())
		
		
		local _Comps={}
		if pawn ~=nil then
			if pawn.weaponCollision.bGenerateOverlapEvents == false then
				pawn.weaponCollision:SetGenerateOverlapEvents(true)
			end
			
			pawn.weaponCollision:GetOverlappingComponents(_Comps)
			--local check= pawn.weaponCollision:IsOverlappingActor(Component)
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
			--pawn.weaponCollision:SetCollisionResponseToChannel(0, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(1, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(2, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(3, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(4, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(5, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(6, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(7, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(8, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(9, 1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(10,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(11,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(12,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(13,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(14,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(15,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(16,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(17,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(18,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(19,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(20,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(21,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(22,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(23,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(24,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(25,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(26,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(27,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(28,1)
			--pawn.weaponCollision:SetCollisionResponseToChannel(29,1)
			--pawn.weaponCollision.BodyInstance.CollisionResponses.ResponseToChannels.EngineTraceChannel6=1
			--pawn.weaponCollision.BodyInstance.CollisionResponses.ResponseToChannels.GameTraceChannel7=1
			--pawn.weaponCollision.BodyInstance.CollisionResponses.ResponseToChannels.WorldStatic=1
		--	pawn.weaponCollision:SetCollisionResponseToChannel(1,1)
			--local bit=pawn.weaponCollision:GetCollisionResponseToChannel(1)
			--print(bit)
		end
		--print(pawn.Mesh:GetCollisionObjectType())
		
		--print(LastTarget)
		--LastTarget=nil
	if isSaber1Extended then	
		local _LastHitComp = {}
		for i, comp in ipairs(_Comps) do
			--print(comp:get_fname():to_string())
			if not isSaberDetached then	
				if string.find(comp:GetOwner():get_fname():to_string(), "Blaster")
				--or string.find(comp:get_fname():to_string(), "DeflectionCapsule")
				or string.find(comp:get_fname():to_string(), "weaponCollision")
				or string.find(comp:GetOwner():get_fname():to_string(), "Cannon")
				or string.find(comp:GetOwner():get_fname():to_string(), "Electrostaff")	
				or string.find(comp:GetOwner():get_fname():to_string(), "Arrow")	
				then
					--print(comp:get_fname():to_string())
					print(comp:get_full_name())
					--if string.find(comp:GetOwner():get_fname():to_string(),"CannonProjectile") then
						isBlock=true
					--else
		--				pawn.HC_Defense:call("Block Pressed")
					--end
					--pawn.HC_Defense:call("Block Released")
					--isBlock=true
					isNewEvent=true
					if string.find(comp:GetOwner():get_fname():to_string(), "Blaster")
					or string.find(comp:get_fname():to_string(), "DeflectionCapsule")				
					then
						--if #AlreadyBlockedArray >10 then
						--	table.remove(AlreadyBlockedArray, 1)
						--end
						--if comp~=LastComp then
						--table.insert(AlreadyBlockedArray, comp)
				--		comp.SphereRadius=5
				--		--LastBlockedElement=comp
				--		--LastComp= comp
				--		--end
				--		comp.BodyInstance.CollisionEnabled=3
						comp.BoundsScale=1.001
					end
					
					
					--pawn.HC_Defense:call("Block Released")
					--pawn.HC_Defense:
				end
			end
			--print(PosDiffSecondaryHand/100 *50)
			
			if comp:GetOwner() ~= nil and not string.find(comp:GetOwner():get_fname():to_string(),"Hero") 
			and not string.find(comp:GetOwner():get_fname():to_string(),"Blaster") 
			and not string.find(comp:GetOwner():get_fname():to_string(),"Volume") 
			and not string.find(comp:GetOwner():get_fname():to_string(),"Pull")
			and not string.find(comp:GetOwner():get_fname():to_string(),"Push")			then
			table.insert(_LastHitComp,comp)
			--	print(comp:GetOwner():get_fname():to_string())
				--print("next")
				if  LastTarget == nil then
					--GameplayStDef:ApplyDamage(comp:GetOwner(),50,nil,pawn,DmgTypeClass)
					
					local Damage1 = PosDiffWeaponHand/100 *50
					local Damage2 = PosDiffSecondaryHand/100 *50
					--pawn.HC_Defense:EnterBlock(false,0)
					--pawn.HC_Defense:ExitBlock()
					if not isSaberDetached then	
						if PosDiffWeaponHand<7 then
						--comp:GetOwner().SwAIDefense:StartBlock(pawn,false,1)
						--comp:GetOwner().SwAIDefense:BlockContact(pawn)
						--	GameplayStatics:RsApplyDamage(comp:GetOwner(),comp,2,nil,pawn,nil,reusable_DmgParam,var1)
						elseif PosDiffWeaponHand>=7  then
							if comp:GetOwner().bCanBlock and comp:GetOwner().SwAIDefense ~=nil  then
								comp:GetOwner().SwAIDefense:StartBlock(pawn,false,1)
								comp:GetOwner().SwAIDefense:BlockContact(pawn)
							end	
							GameplayStatics:RsApplyDamage(comp:GetOwner(),comp,Damage1,nil,pawn,DmgTypeClass,reusable_DmgParam,var1)
						end
						if PosDiffSecondaryHand >= 7 and isSaber2Extended then
							if comp:GetOwner().bCanBlock and comp:GetOwner().SwAIDefense ~=nil  then
								comp:GetOwner().SwAIDefense:StartBlock(pawn,false,1)
								comp:GetOwner().SwAIDefense:BlockContact(pawn)
							end	
							GameplayStatics:RsApplyDamage(comp:GetOwner(),comp,Damage2,nil,pawn,DmgTypeClass,reusable_DmgParam,var1)
						end
					elseif isSaberDetached then
							if comp:GetOwner().bCanBlock and comp:GetOwner().SwAIDefense ~=nil  then
								comp:GetOwner().SwAIDefense:StartBlock(pawn,false,1)
								comp:GetOwner().SwAIDefense:BlockContact(pawn)
							end	
							GameplayStatics:RsApplyDamage(comp:GetOwner(),comp,30,nil,pawn,DmgTypeClass,reusable_DmgParam,var1)
						
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
			--print(comp:GetOwner():get_fname():to_string())
			end
		end
		--print(#(_Comps))
		if #(_LastHitComp) ==0 then
			LastTarget=nil
			
		end
		
	end	
	UpdateBlockStatus(delta,pawn)
		--print(PosDiffWeaponHand)
		
		--print(" ")
		--print(" ")
		--print(" ")
end)


function pressButton(state, button)
	state.Gamepad.wButtons = state.Gamepad.wButtons | button
end
function unpressButton(state, button)
	state.Gamepad.wButtons = state.Gamepad.wButtons & ~(button)
end



uevr.sdk.callbacks.on_xinput_get_state(
function(retval, user_index, state)


if not isMenu then
	unpressButton(state, XINPUT_GAMEPAD_LEFT_SHOULDER)
	if isInAir and PosDiffWeaponHand>15 and RZone==12  then 
		pressButton(state,XINPUT_GAMEPAD_X)
	end
	if isInAir and PosDiffSecondaryHand >15 and LZone== 12 then
		pressButton(state,XINPUT_GAMEPAD_Y)
	end
	if ThumbRY<20000 then
		StartKickCounter=true
	end
	if KickCounter < 1 and StartKickCounter==true then
		if PosDiffWeaponHand>15 and RZone==12  then 
			pressButton(state,XINPUT_GAMEPAD_X)
			StartKickCounter=false
			KickCounter=0
		end
	end
		
end
if right_hand_component:K2_GetComponentRotation().z > -105 and right_hand_component:K2_GetComponentRotation().z<-75 and PosDiffWeaponHand<20 and isSaber1Extended then
	--isBlock=true

end
if isBlock then
	--DeltaBlock
	pressButton(state, XINPUT_GAMEPAD_LEFT_SHOULDER)
else
	
	unpressButton(state, XINPUT_GAMEPAD_LEFT_SHOULDER)
end



end)