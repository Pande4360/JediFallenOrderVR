#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatBase.hpp"
#include "InterpTrackFloatMaterialParam.hpp"
void* _Script_Engine::InterpTrackFloatMaterialParam::get_TargetMaterials() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::InterpTrackFloatMaterialParam::get_ParamName() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackFloatMaterialParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackFloatMaterialParam");
    return result;
}
