#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackVectorBase.hpp"
#include "InterpTrackVectorMaterialParam.hpp"
void* _Script_Engine::InterpTrackVectorMaterialParam::get_ParamName() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::InterpTrackVectorMaterialParam::get_TargetMaterials() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackVectorMaterialParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackVectorMaterialParam");
    return result;
}
