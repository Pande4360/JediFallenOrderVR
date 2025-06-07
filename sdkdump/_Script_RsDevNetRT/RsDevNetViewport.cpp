#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameViewportClient.hpp"
#include "RsDevNetViewport.hpp"
_Script_CoreUObject::Class* _Script_RsDevNetRT::RsDevNetViewport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsDevNetRT.RsDevNetViewport");
    return result;
}
