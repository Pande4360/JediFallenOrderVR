#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_BitwiseCompressOnly.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_BitwiseCompressOnly::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_BitwiseCompressOnly");
    return result;
}
