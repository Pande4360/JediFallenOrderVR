#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimaryDataAsset.hpp"
#include "RsPrimaryStreamingAsset.hpp"
#include "RsStreamingDefinition.hpp"
_Script_Engine::RsStreamingDefinition*& _Script_Engine::RsPrimaryStreamingAsset::get_RootStreamingDefinitionPtr() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::RsPrimaryStreamingAsset::get_Rules() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::RsPrimaryStreamingAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsPrimaryStreamingAsset");
    return result;
}
