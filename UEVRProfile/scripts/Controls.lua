local uevrUtils = require("libs/uevr_utils")
require(".\\Subsystems\\UEHelper")
require(".\\Trackers\\Trackers")

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

local isToggled=false


local function ToggleBlade(pawn)
	local ExtendDir= pawn.LightsaberChild_01.ExtendDir
	if Abutton then
		if isSaberExtended and isToggled==false then 
			pawn.LightsaberChild_01:ExtendRetractBlade(false,false)
			isToggled=true
		elseif not isSaberExtended and isToggled==false then
			pawn.LightsaberChild_01:ExtendRetractBlade(true,false)
			isToggled=true
		end
	end
	if not Abutton then
		isToggled=false
	end	

end





uevr.sdk.callbacks.on_pre_engine_tick(
function(engine, delta)
	
	local pawn= api:get_local_pawn(0)
	
	ToggleBlade(pawn)
		
	
end)

uevr.sdk.callbacks.on_xinput_get_state(
function(retval, user_index, state)

	if not isMenu then
		unpressButton(state,XINPUT_GAMEPAD_A)
		unpressButton(state,XINPUT_GAMEPAD_B)
		if ThumbRY > 30000 then
			pressButton(state,XINPUT_GAMEPAD_A)
			
		end
		if ThumbRY < -30000 then
			pressButton(state,XINPUT_GAMEPAD_B)
		end
	end


end)