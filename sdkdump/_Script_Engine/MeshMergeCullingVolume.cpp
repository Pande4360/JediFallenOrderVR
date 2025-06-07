#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshMergeCullingVolume.hpp"
#include "Volume.hpp"
_Script_CoreUObject::Class* _Script_Engine::MeshMergeCullingVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MeshMergeCullingVolume");
    return result;
}
