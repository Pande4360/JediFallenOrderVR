#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataAsset.hpp"
#include "PrimaryDataAsset.hpp"
_Script_CoreUObject::Class* _Script_Engine::PrimaryDataAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PrimaryDataAsset");
    return result;
}
