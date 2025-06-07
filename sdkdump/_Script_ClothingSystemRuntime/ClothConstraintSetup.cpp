#include "..\FUObjectArray.hpp"
#include "ClothConstraintSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ClothingSystemRuntime::ClothConstraintSetup::get_Stiffness() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_ClothingSystemRuntime::ClothConstraintSetup::get_StiffnessMultiplier() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ClothingSystemRuntime::ClothConstraintSetup::get_StretchLimit() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothConstraintSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothConstraintSetup");
    return result;
}
float& _Script_ClothingSystemRuntime::ClothConstraintSetup::get_CompressionLimit() {
    return *(float*)((uintptr_t)this + 0xc);
}
