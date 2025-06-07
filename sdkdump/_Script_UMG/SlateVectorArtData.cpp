#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "SlateVectorArtData.hpp"
_Script_CoreUObject::Class* _Script_UMG::SlateVectorArtData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SlateVectorArtData");
    return result;
}
void* _Script_UMG::SlateVectorArtData::get_VertexData() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_UMG::SlateVectorArtData::get_IndexData() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::MaterialInterface*& _Script_UMG::SlateVectorArtData::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x48);
}
void* _Script_UMG::SlateVectorArtData::get_ExtentMin() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_UMG::SlateVectorArtData::get_ExtentMax() {
    return (void*)((uintptr_t)this + 0x58);
}
