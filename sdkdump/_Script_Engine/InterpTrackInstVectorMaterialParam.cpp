#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstVectorMaterialParam.hpp"
#include "InterpTrackVectorMaterialParam.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstVectorMaterialParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstVectorMaterialParam");
    return result;
}
void* _Script_Engine::InterpTrackInstVectorMaterialParam::get_MaterialInstances() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::InterpTrackInstVectorMaterialParam::get_ResetVectors() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::InterpTrackInstVectorMaterialParam::get_PrimitiveMaterialRefs() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::InterpTrackVectorMaterialParam*& _Script_Engine::InterpTrackInstVectorMaterialParam::get_InstancedTrack() {
    return *(_Script_Engine::InterpTrackVectorMaterialParam**)((uintptr_t)this + 0x58);
}
