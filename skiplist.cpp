#include <string>
#include "skiplist.h"

template<typename K, typename V>
Node<K,V>::Node(K key, V value, int node_level):
    m_key(key), m_value(value),
    m_forward(node_level, nullptr),
    m_node_level(node_level)
{
}

template<typename K, typename V>
SkipList<K, V>::SkipList():
    m_head(std::make_shared<Node<K, V> >()),
    m_list_level(1)
{
}

template<typename K, typename V>
int SkipList<K, V>::insert()
{
    return 0;
}
