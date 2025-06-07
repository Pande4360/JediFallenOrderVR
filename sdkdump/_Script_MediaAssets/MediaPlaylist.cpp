#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MediaPlaylist.hpp"
#include "MediaSource.hpp"
int32_t _Script_MediaAssets::MediaPlaylist::Num() {
    return;
}
void* _Script_MediaAssets::MediaPlaylist::get_Items() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_MediaAssets::MediaPlaylist::RemoveAt(int32_t Index) {
    return;
}
bool _Script_MediaAssets::MediaPlaylist::Replace(int32_t Index, _Script_MediaAssets::MediaSource* Replacement) {
    return;
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaPlaylist::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaPlaylist");
    return result;
}
bool _Script_MediaAssets::MediaPlaylist::Remove(_Script_MediaAssets::MediaSource* MediaSource) {
    return;
}
void _Script_MediaAssets::MediaPlaylist::Insert(_Script_MediaAssets::MediaSource* MediaSource, int32_t Index) {
    return;
}
_Script_MediaAssets::MediaSource* _Script_MediaAssets::MediaPlaylist::GetRandom(int32_t& OutIndex) {
    return;
}
_Script_MediaAssets::MediaSource* _Script_MediaAssets::MediaPlaylist::GetPrevious(int32_t& InOutIndex) {
    return;
}
_Script_MediaAssets::MediaSource* _Script_MediaAssets::MediaPlaylist::GetNext(int32_t& InOutIndex) {
    return;
}
_Script_MediaAssets::MediaSource* _Script_MediaAssets::MediaPlaylist::Get(int32_t Index) {
    return;
}
bool _Script_MediaAssets::MediaPlaylist::AddUrl(void* URL) {
    return;
}
bool _Script_MediaAssets::MediaPlaylist::AddFile(void* FilePath) {
    return;
}
bool _Script_MediaAssets::MediaPlaylist::Add(_Script_MediaAssets::MediaSource* MediaSource) {
    return;
}
