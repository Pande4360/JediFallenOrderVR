#include "..\FUObjectArray.hpp"
#include "DMG_PhysicsObject_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DamageType.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Damage_DMG_PhysicsObject::DMG_PhysicsObject_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Damage/DMG_PhysicsObject.DMG_PhysicsObject_C");
    return result;
}
