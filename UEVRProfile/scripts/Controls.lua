local uevrUtils = require("libs/uevr_utils")
require(".\\Subsystems\\UEHelper")
require(".\\Trackers\\Trackers")
require(".\\Subsystems\\GestureScript")
require(".\\Subsystems\\MeleePower")

local api = uevr.api
local vr = uevr.params.vr




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

local isSaberThrowR=false
--local isSaberDetached=false
local isRSwitched=false
local CurrThrowAngle=0
local CurrThrowRange=0
local isNormalGrip=true
local isToggled=false
local ToggleDelta=0
local hitresult_c = find_required_object("ScriptStruct /Script/Engine.HitResult")
local empty_hitresult = StructObject.new(hitresult_c)
local function UpdateWield(pawn)
	if pawn== nil then return end
	
		local DiffY =0
					if Diff_Rotator_LR.y-LeftCompRotation.y >180 then
						DiffY=  (Diff_Rotator_LR.y-LeftCompRotation.y)-360
					else DiffY = Diff_Rotator_LR.y-LeftCompRotation.y
					end
					
	
	if lShoulder and not isSaberDetached then  --and isSaber2Extended then
		uevr.params.vr.set_mod_value("UObjectHook_AttachLerpSpeed","8")
		local TwinSaberVec= kismet_math_library:Conv_VectorToRotator(Vector3d.new(
					LHandWeaponX,
					LHandWeaponY,
					LHandWeaponZ))
		--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01)--:set_rotation_offset(Vector3d.new(TwinSaberVec.x/180*math.pi,TwinSaberVec.y/180*math.pi,TwinSaberVec.z/180*math.pi))
		
		--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh)
		UEVR_UObjectHook.remove_motion_controller_state(pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh)
		UEVR_UObjectHook.remove_motion_controller_state(pawn.Lightsaber_01)
		UEVR_UObjectHook.remove_motion_controller_state(pawn.weaponCollision)
		--Detach stuff to avoid pawn influence
		if pawn.Lightsaber_01:GetAttachParent() ~= right_hand_component then
			pawn.Lightsaber_01:DetachFromParent(false,false)
			pawn.Lightsaber_01:K2_AttachToComponent(right_hand_component,"Root",0,0,0,false)
		end
		if pawn.weaponCollision:GetAttachParent() ~= right_hand_component then
			pawn.weaponCollision:DetachFromParent(false,false)
			pawn.weaponCollision:K2_AttachToComponent(right_hand_component,"Root",0,0,0,false)
		end
		--Move stuff via World location and rotation
		pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh:K2_SetWorldLocationAndRotation(	Vector3d.new((left_hand_component:K2_GetComponentLocation().x+left_hand_component:GetForwardVector().x*5+right_hand_component:GetForwardVector().x*5+right_hand_component:K2_GetComponentLocation().x)/2,
																		 (left_hand_component:K2_GetComponentLocation().y+left_hand_component:GetForwardVector().y*5+right_hand_component:GetForwardVector().y*5+right_hand_component:K2_GetComponentLocation().y)/2,
																		 (left_hand_component:K2_GetComponentLocation().z+left_hand_component:GetForwardVector().z*5+right_hand_component:GetForwardVector().z*5+right_hand_component:K2_GetComponentLocation().z)/2)
																	, Vector3d.new(		Diff_Rotator_LR.x+90,
																						Diff_Rotator_LR.y,
																						Diff_Rotator_LR.z)
																	, false, empty_hitresult, false)
		pawn.weaponCollision:K2_SetWorldLocationAndRotation(	Vector3d.new((left_hand_component:K2_GetComponentLocation().x+left_hand_component:GetForwardVector().x*5+right_hand_component:GetForwardVector().x*5+right_hand_component:K2_GetComponentLocation().x)/2,
																		 (left_hand_component:K2_GetComponentLocation().y+left_hand_component:GetForwardVector().y*5+right_hand_component:GetForwardVector().y*5+right_hand_component:K2_GetComponentLocation().y)/2,
																		 (left_hand_component:K2_GetComponentLocation().z+left_hand_component:GetForwardVector().z*5+right_hand_component:GetForwardVector().z*5+right_hand_component:K2_GetComponentLocation().z)/2)
																	, Vector3d.new(		Diff_Rotator_LR.x+90,
																						Diff_Rotator_LR.y,
																						Diff_Rotator_LR.z)
																	, false, empty_hitresult, false)															
	--	print(Diff_Rotator_LR.x)
		--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01):set_rotation_offset(Vector3f.new(
		--				((DiffY)/180*math.pi)*math.cos(LeftCompRotation.z/180*math.pi)+math.sin(LeftCompRotation.z/180*math.pi)* ((-Diff_Rotator_LR.x+LeftCompRotation.x)/180*math.pi+90/180*math.pi),
		--				(-Diff_Rotator_LR.x)/180*math.pi*math.cos(LeftCompRotation.z/180*math.pi)*math.cos(LeftCompRotation.z/180*math.pi)+math.sin(LeftCompRotation.z/180*math.pi)* ((-DiffY)/180*math.pi),
		--				math.pi/2))
	elseif not lShoulder and not isSaberDetached then
		uevr.params.vr.set_mod_value("UObjectHook_AttachLerpSpeed","15")
		UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh)
		UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh):set_permanent(true)
		UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.weaponCollision)
		UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.weaponCollision):set_permanent(true)
	end
end

local function ToggleBlade(pawn, delta)
	if pawn==nil then return end
	local ExtendDir= pawn.LightsaberChild_01.ExtendDir
	if Abutton then
		ToggleDelta=ToggleDelta+delta
		--isToggled=true
	end
	if not Abutton and ToggleDelta>0 and isToggled==false then
		isToggled=true
		
	end	
		if not isSaber1Extended and isToggled and ToggleDelta< 1  then 
			pawn.LightsaberChild_01:ExtendRetractBlade(true,false)
			isToggled=false
			ToggleDelta=0
		elseif isSaber1Extended and not isSaber2Extended and isToggled and ToggleDelta< 1 then
			pawn.LightsaberChild_02:ExtendRetractBlade(true,false)
			isToggled=false
			ToggleDelta=0
		elseif isSaber1Extended and isSaber2Extended and isToggled and ToggleDelta<1 then
			isToggled=false
			pawn.LightsaberChild_02:ExtendRetractBlade(false,false)
			ToggleDelta=0
		elseif isSaber1Extended and ToggleDelta >= 1 and isToggled  then
			isToggled=false
			ToggleDelta=0
			pawn.LightsaberChild_01:ExtendRetractBlade(false,false)
			pawn.LightsaberChild_02:ExtendRetractBlade(false,false)
		end
		if not isSaber2Extended then
			if isNormalGrip then
				--pawn.weaponCollision.RelativeLocation.Z=60
			elseif not isNormalGrip then
				--pawn.weaponCollision.RelativeLocation.Z=-60
			end
			pawn.weaponCollision.RelativeScale3D.Z=1
		elseif isSaber2Extended then			
			pawn.weaponCollision.RelativeScale3D.Z=2
			pawn.weaponCollision.RelativeLocation.Z=0
		end

end
local StartPosRHandX=0
local StartPosRHandY=0
local StartPosRHandZ=0
local StartPosLHandX=0
local StartPosLHandY=0
local StartPosLHandZ=0
local isRTriggerActive=false
local isRForceActive=false
local isLTriggerActive=false
local isLForceActive=false

local isForceSlowing=false
local isForcePushing=false
local isForcePulling=false

local function UpdateStartPosForceRHand()
	if RTrigger > 100  and isRTriggerActive==false then
		isRTriggerActive=true
		StartPosRHandX= RHandNewX
		StartPosRHandY= RHandNewY
		StartPosRHandZ= RHandNewZ
	end
	if RTrigger==0 or rShoulder then
		isRTriggerActive=false
		isRForceActive=false
					
	end
	
	local StartPosRHand=Vector3d.new(StartPosRHandX,StartPosRHandY,StartPosRHandZ)
	
	return StartPosRHand
end
local function UpdateStartPosForceLHand()
	if LTrigger > 100  and isLTriggerActive==false then
		isLTriggerActive=true
		StartPosLHandX= LHandNewX
		StartPosLHandY= LHandNewY
		StartPosLHandZ= LHandNewZ
	end
	if LTrigger==0 then
		isLTriggerActive=false
		isLForceActive=false
	end
	local StartPosLHand=Vector3d.new(StartPosLHandX,StartPosLHandY,StartPosLHandZ)
	
	return StartPosLHand
end		


local function ForceHandler(pawn)
	if isRTriggerActive and 	RHandNewX-UpdateStartPosForceRHand().x >15 and not isRForceActive then
		isRForceActive=true
		isForcePushing=true
		
	elseif isRTriggerActive and 	RHandNewX-UpdateStartPosForceRHand().x < -15 and not isRForceActive then
		isRForceActive = true
		isForcePulling= true
	elseif isRTriggerActive and math.abs(RHandNewY-UpdateStartPosForceRHand().y) > 15 and not isRForceActive then
		isRForceActive = true
		isForceSlowing= true
	end
	if isLTriggerActive and 	LHandNewX-UpdateStartPosForceLHand().x >15 and not isLForceActive then
		isLForceActive=true
		isForcePushing=true
		
	elseif isTriggerActive and 	LHandNewX-UpdateStartPosForceLHand().x < -15 and not isLForceActive then
		isLForceActive = true
		isForcePulling= true
	elseif isLTriggerActive and math.abs(LHandNewY-UpdateStartPosForceLHand().y) > 15 and not isLForceActive then
		isLForceActive = true
		isForceSlowing= true
	end

end

local function ApplyForcePower(state,pawn)
		
		
	if isForcePushing then
		isForcePushing=false
		state.Gamepad.bRightTrigger = 255
	elseif isForcePulling then
		isForcePulling=false
		state.Gamepad.bLeftTrigger = 255
	elseif isForceSlowing then
		isForceSlowing=false
		pressButton(state,XINPUT_GAMEPAD_RIGHT_SHOULDER)
	end
end


local isSaber2ExtendedSwitched=false
local wasUpdated=false
local CurrGripAngle=0
local SwappedAngle=math.pi
local WantedGripAngle=0
local function SwitchSaberGrip(pawn,delta)
	if pawn==nil then return end

	if not isSaberDetached then	
		if (rShoulder  or  (isSaber2ExtendedSwitched and not wasUpdated)) and isRSwitched ==false then
			if rShoulder and  RTrigger<50 then
				isRSwitched=true
				isNormalGrip= not isNormalGrip
			end	
			if isNormalGrip then
				WantedGripAngle=0
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh):set_rotation_offset(Vector3d.new(0,0,0))--pawn.LightsaberChild_01.LightsaberSkelMesh.RelativeRotation.Pitch= 0
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01.ChildActor.LightsaberSkelMesh):set_location_offset(Vector3d.new(0,0,0))--.RelativeLocation.z = 0
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.weaponCollision):set_location_offset(Vector3d.new(0,-60,0))
				--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.weaponCollision):set_rotation_offset(Vector3d.new(0,0,0))
				--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01):set_rotation_offset(Vector3d.new(0,0,0))
				--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.Lightsaber_01):set_location_offset(Vector3d.new(0,0,0))
				--pawn.weaponCollision.RelativeLocation.Z=60
			elseif not isNormalGrip then
				WantedGripAngle=math.pi
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.weaponCollision):set_location_offset(Vector3d.new(0,60,0))
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.LightsaberChild_01.LightsaberSkelMesh):set_rotation_offset(Vector3d.new(CurrGripAngle,0,0))--pawn.LightsaberChild_01.LightsaberSkelMesh.RelativeRotation.Pitch= 180
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.LightsaberChild_01.LightsaberSkelMesh):set_location_offset(Vector3d.new(0,5,0))--pawn.LightsaberChild_01.LightsaberSkelMesh.RelativeLocation.z= 5
				--pawn.weaponCollision.RelativeLocation.Z=-60
			end
			wasUpdated=true
		end
		if isSaber2Extended then
				UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.weaponCollision):set_location_offset(Vector3d.new(0,0,0))
				isSaber2ExtendedSwitched=false
				wasUpdated=false
		elseif not isSaber2Extended and wasUpdated==false then
			isSaber2ExtendedSwitched=true
		end
		
		
		if not rShoulder  then 
			isRSwitched=false
		end	
	--swap rotation delay	
		if WantedGripAngle~= CurrGripAngle then
			 				
			if WantedGripAngle==0 then
				CurrGripAngle=CurrGripAngle-delta*math.pi*4
				if WantedGripAngle==0 and CurrGripAngle <= 0 then 
					CurrGripAngle=0
				end
			elseif WantedGripAngle == math.pi then
				CurrGripAngle=CurrGripAngle+delta*math.pi*4
				if CurrGripAngle >= math.pi then
					CurrGripAngle=math.pi
				end
			end
			UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.LightsaberChild_01.LightsaberSkelMesh):set_rotation_offset(Vector3d.new(CurrGripAngle,0,0))
		end
	end	
end
local MaxThrowRange=0
local DeltaThrow=0
local function ApplySaberThrow(pawn,delta)
	if pawn==nil then return end
	
	print(MaxThrowRange)
	if rShoulder and RTrigger>200 and PosDiffWeaponHand > 5  then
		
		isSaberThrowR=true
		isSaberDetached=true
		
	end
	if isSaberThrowR==true and not (rShoulder or RTrigger >200) then
		isSaberThrowR=false
		uevr.params.vr.set_mod_value("UObjectHook_AttachLerpSpeed","30")
		MaxThrowRange=0
		DeltaThrow=0
	end
	
	if isSaberThrowR then
		uevr.params.vr.set_mod_value("UObjectHook_AttachLerpSpeed","3")
		DeltaThrow=DeltaThrow+delta
		if PosDiffWeaponHand/40* 1000>MaxThrowRange and DeltaThrow<1 then
			MaxThrowRange=PosDiffWeaponHand/40* 1000
		end
		CurrThrowAngle=CurrThrowAngle+delta*900/180*math.pi
		CurrThrowRange=CurrThrowRange+1500*delta
		if CurrThrowRange>= MaxThrowRange then
			CurrThrowRange=MaxThrowRange
		end
		
	end
	if not isSaberThrowR and isSaberDetached then
		CurrThrowRange=CurrThrowRange-1500*delta
		if CurrThrowRange<0 then
			CurrThrowRange=0
			isSaberDetached=false
		end
	end
	if isSaberDetached then
		if pawn.Lightsaber_01:GetAttachParent() ~= right_hand_component then
			pawn.Lightsaber_01:DetachFromParent(false,false)
			pawn.Lightsaber_01:K2_AttachToComponent(right_hand_component,"Root",0,0,0,false)
		end
		if pawn.weaponCollision:GetAttachParent() ~= right_hand_component then
			pawn.weaponCollision:DetachFromParent(false,false)
			pawn.weaponCollision:K2_AttachToComponent(right_hand_component,"Root",0,0,0,false)
		end
		UEVR_UObjectHook.remove_motion_controller_state(pawn.LightsaberChild_01.LightsaberSkelMesh)--:set_rotation_offset(Vector3d.new(0,0,CurrThrowAngle))
		--UEVR_UObjectHook.get_or_add_motion_controller_state(pawn.LightsaberChild_01.LightsaberSkelMesh):set_location_offset(Vector3d.new(  0,5,CurrThrowRange))	
		pawn.LightsaberChild_01.LightsaberSkelMesh:K2_SetWorldLocationAndRotation(Vector3d.new((right_hand_component:GetForwardVector().x*CurrThrowRange+right_hand_component:K2_GetComponentLocation().x),
																		 (right_hand_component:GetForwardVector().y*CurrThrowRange+right_hand_component:K2_GetComponentLocation().y),
																		 (right_hand_component:GetForwardVector().z*CurrThrowRange+right_hand_component:K2_GetComponentLocation().z))
																	, Vector3d.new(		0,
																						CurrThrowAngle/math.pi*180,
																						90)
																	, false, empty_hitresult, false)
		pawn.weaponCollision:K2_SetWorldLocationAndRotation(	Vector3d.new((right_hand_component:GetForwardVector().x*CurrThrowRange+right_hand_component:K2_GetComponentLocation().x),
																		 (right_hand_component:GetForwardVector().y*CurrThrowRange+right_hand_component:K2_GetComponentLocation().y),
																		 (right_hand_component:GetForwardVector().z*CurrThrowRange+right_hand_component:K2_GetComponentLocation().z))
																	, Vector3d.new(		0,
																						CurrThrowAngle/math.pi*180,
																						90)	
																					, false, empty_hitresult, false)						
	end
end


uevr.sdk.callbacks.on_pre_engine_tick(
function(engine, delta)
	
	local dpawn= api:get_local_pawn(0)
	SwitchSaberGrip(dpawn,delta)
	ToggleBlade(dpawn,delta)
	UpdateStartPosForceRHand()	
	UpdateStartPosForceLHand()	
	ForceHandler(dpawn)
	UpdateWield(dpawn)
	ApplySaberThrow(pawn,delta)
	--print(RHandNewX)
end)

uevr.sdk.callbacks.on_xinput_get_state(
function(retval, user_index, state)
	local pawn= api:get_local_pawn(0)
	if not isMenu then
		
		
		if Xbutton then
			pressButton(state,XINPUT_GAMEPAD_Y)
		end
		if ThumbRY > 30000 then
			pressButton(state,XINPUT_GAMEPAD_A)
			
		end
		if ThumbRY < -30000 then
			pressButton(state,XINPUT_GAMEPAD_B)
		end
		ApplyForcePower(state,pawn)
	end


end)