#include "..\FUObjectArray.hpp"
#include "Shake_Combat_Medium_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Camera_CameraShakes_Shake_Combat_Medium::Shake_Combat_Medium_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/CameraShakes/Shake_Combat_Medium.Shake_Combat_Medium_C");
    return result;
}
