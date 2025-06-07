require(".\\Trackers\\Trackers")
require(".\\Subsystems\\UEHelper")
--require(".\\Config\\CONFIG")
local api = uevr.api
local params = uevr.params
local callbacks = params.sdk.callbacks
local vr=uevr.params.vr
local function find_required_object(name)
    local obj = uevr.api:find_uobject(name)
    if not obj then
        error("Cannot find " .. name)
        return nil
    end

    return obj
end
local find_static_class = function(name)
    local c = find_required_object(name)
    return c:get_class_default_object()
end

local hitresult_c = find_required_object("ScriptStruct /Script/Engine.HitResult")
local reusable_hit_result1 = StructObject.new(hitresult_c)
local POIDataStruct= find_required_object("UserDefinedStruct /Game/GlobalData/Structs/Struct_CameraPOIVar.Struct_CameraPOIVar")
local reusable_POIData= StructObject.new(POIDataStruct)
--local Actor= find_required_object("BOG_Global_Snd_C /Game/Levels/Bogano/BOGGlobal/SubLevels/BOG_Global_Snd.BOG_Global_Snd.PersistentLevel.BOG_Global_Snd_C_3")
--reusable_POIData.FocusActor = Actor


local CamAngle=RightRotator
local AttackDelta=0
local HandVector= Vector3f.new(0.0,0.0,0.0)
local HmdVector = Vector3f.new(0.0,0.0,0.0)
local VecAlpha  = Vector3f.new(0,0,0)
local Alpha  	= nil
local AlphaDiff =0
local LastState= isBow
local ConditionChagned=false
local isMenuEnter=false
local YawLast=0

local LeftRightScaleFactor		=0
local ForwardBackwardScaleFactor=0
	



uevr.sdk.callbacks.on_pre_engine_tick(
function(engine, delta)
	local pawn = api:get_local_pawn(0)
	local player =api:get_player_controller(0)
	local RotatorXYZ= right_hand_component:K2_GetComponentRotation()
	
	
	player:ClientSetRotation(RotatorXYZ,true)
	--pawn.Instigator:RotateToAlignXY({RotatorXYZ.x,RotatorXYZ.y})
	


--print(isRiding


		
		
		--print(isBow)
		
		-- Diff_Rotator_LR
	
	----pcall(function()
	
	
	--end)
	
		
		
		
		
		HmdVector=hmd_component:GetForwardVector()
		HandVector= right_hand_component:GetForwardVector()
		
	--	VecAlpha = (HandVector.x - HmdVector.x, HandVector.y - HmdVector.y, HandVector.z - HmdVector.z)
							local VecAlphaX= HandVector.x - HmdVector.x
							local VecAlphaY= HandVector.y - HmdVector.y
							local Alpha1
							local Alpha2
							if HandVector.x >=0 and HandVector.y>=0 then	
							Alpha1 =math.pi/2-math.asin( HandVector.x/ math.sqrt(HandVector.y^2+HandVector.x^2))
							--print("Quad1")
							elseif HandVector.x <0 and HandVector.y>=0 then
							--print("Quad2")
							Alpha1 =math.pi/2-math.asin( HandVector.x/ math.sqrt(HandVector.y^2+HandVector.x^2))
							elseif HandVector.x <0 and HandVector.y<0 then
							--print("Quad3")
							Alpha1 =math.pi+math.pi/2+math.asin( HandVector.x/ math.sqrt(HandVector.y^2+HandVector.x^2))
							elseif HandVector.x >=0 and HandVector.y<0 then
							--print("Quad4")
							Alpha1 =3/2*math.pi+math.asin( HandVector.x/ math.sqrt(HandVector.y^2+HandVector.x^2))
							end
							
							if HmdVector.x >=0 and HmdVector.y>=0 then	
							Alpha2 =math.pi/2-math.asin( HmdVector.x/ math.sqrt(HmdVector.y^2+HmdVector.x^2))
							--print("Quad1")
							elseif HmdVector.x <0 and HmdVector.y>=0 then
							--print("Quad2")
							Alpha2 =math.pi/2-math.asin( HmdVector.x/ math.sqrt(HmdVector.y^2+HmdVector.x^2))
							elseif HmdVector.x <0 and HmdVector.y<0 then
							--print("Quad3")
							Alpha2 =math.pi+math.pi/2+math.asin( HmdVector.x/ math.sqrt(HmdVector.y^2+HmdVector.x^2))
							elseif HmdVector.x >=0 and HmdVector.y<0 then
							--print("Quad4")
							Alpha2 =3/2*math.pi+math.asin( HmdVector.x/ math.sqrt(HmdVector.y^2+HmdVector.x^2))
							end
							
							
							AlphaDiff= Alpha2-Alpha1
							if isBow and RTrigger ~= 0 then
								AlphaDiff=AlphaDiff-math.pi*20/180
							end
		
		
		
--	elseif HeadBasedMovement then uevr.params.vr.set_mod_value("VR_MovementOrientation", "1")
--	elseif HeadBasedMovement==false then uevr.params.vr.set_mod_value("VR_MovementOrientation", "2")
--	end
	
	
			
	--if not isSprinting then
	--	LeftRightScaleFactor= ThumbLX/32767		
	--	ForwardBackwardScaleFactor = ThumbLY/32767
	--	if HeadBasedMovement then
	--		--HandVector= right_hand_component:GetForwardVector()
	--		hmd_component:GetForwardVector()
	--						
	--		pawn:AddMovementInput(hmd_component:GetForwardVector(),ForwardBackwardScaleFactor,true)
	--		pawn:AddMovementInput(hmd_component:GetRightVector(),LeftRightScaleFactor,true)
	--		uevr.params.vr.set_mod_value("VR_MovementOrientation", "0")
	--	elseif not HeadBasedMovement then
	--		--HandVector= right_hand_component:GetForwardVector()
	--		right_hand_component:GetForwardVector()
	--							
	--		pawn:AddMovementInput(right_hand_component:GetForwardVector(),ForwardBackwardScaleFactor,true)
	--		pawn:AddMovementInput(right_hand_component:GetRightVector(),LeftRightScaleFactor,true)
	--		uevr.params.vr.set_mod_value("VR_MovementOrientation", "0")
	--	end
	--end
	



end)

local DecoupledYawCurrentRot = 0
local RXState=0
local SnapAngle
 



uevr.sdk.callbacks.on_xinput_get_state(
function(retval, user_index, state)


--Read Gamepad stick input for rotation compensation
	--if HeadBasedMovement   then
	
	
	
	
	
		state.Gamepad.sThumbLX= ThumbLX*math.cos(-AlphaDiff)- ThumbLY*math.sin(-AlphaDiff)
				
		state.Gamepad.sThumbLY= math.sin(-AlphaDiff)*ThumbLX + ThumbLY*math.cos(-AlphaDiff)
		
	--end



	SnapAngle = PositiveIntegerMask(uevr.params.vr:get_mod_value("VR_SnapturnTurnAngle"))
	if SnapTurn then
		if ThumbRX >200 and RXState ==0 and not isMenu then
			DecoupledYawCurrentRot=DecoupledYawCurrentRot + SnapAngle
			RXState=1
		elseif ThumbRX <-200 and RXState ==0 and not isMenu  then
			DecoupledYawCurrentRot=DecoupledYawCurrentRot - SnapAngle
			RXState=1
		elseif ThumbRX <= 200 and ThumbRX >=-200  then
			RXState=0
		end
 
	
	else
		
		SmoothTurnRate = PositiveIntegerMask(uevr.params.vr:get_mod_value("VR_SnapturnTurnAngle"))/90
	
	
		local rate = state.Gamepad.sThumbRX/32767
					rate =  rate*rate*rate
		if ThumbRX >2200 and not isMenu   then
			DecoupledYawCurrentRot=DecoupledYawCurrentRot + SmoothTurnRate * rate
			
		elseif ThumbRX <-2200 and not isMenu   then
			DecoupledYawCurrentRot=DecoupledYawCurrentRot + SmoothTurnRate * rate
		
		end
	end


end)



local PreRot
local DiffRot
local DecoupledYawCurrentRotLast=0
uevr.sdk.callbacks.on_early_calculate_stereo_view_offset(function(device, view_index, world_to_meters, position, rotation, is_double)
PreRot=rotation.y
DiffRot= HmdRotator.y - RightRotator.y


	rotation.y = DecoupledYawCurrentRot
	
	
	--vr.recenter_view()
local pawn = api:get_local_pawn(0)	

position.z = pawn:K2_GetActorLocation().z+70
position.x = pawn:K2_GetActorLocation().x
position.y = pawn:K2_GetActorLocation().y


end)

uevr.sdk.callbacks.on_post_calculate_stereo_view_offset(function(device, view_index, world_to_meters, position, rotation, is_double)
	--print(DecoupledYawCurrentRot)
local pawn=api:get_local_pawn(0)

	

	DecoupledYawCurrentRotLast=rotation.y	
-- if ConditionChagned then
	--print("ok2")
	-- ConditionChagned=false
	---- vr.recenter_view()
	-- rotation.y=DecoupledYawCurrentRotLast	
	--end

end)