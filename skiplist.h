#ifndef SKIPLIST_H
#define SKIPLIST_H
#include <vector>
#include <memory>

template<typename K, typename V>
class Node
{
public:
    //! Default constructor
    Node();

    //! Copy constructor
    Node(const Node &other);

    //! Move constructor
    Node(Node &&other) noexcept;

    //! Destructor
    virtual ~Node() noexcept;

    //! Copy assignment operator
    Node& operator=(const Node &other);

    //! Move assignment operator
    Node& operator=(Node &&other) noexcept;

private:
    K m_key;
    V m_value;
    std::vector<std::shared_ptr<Node> > m_forward;
    int m_node_level;
};

template<typename K, typename V>
class SkipList
{
public:
    //! Default constructor
    SkipList();

    //! Copy constructor
    SkipList(const SkipList<K, V> &other);

    //! Move constructor
    SkipList(SkipList &&other) noexcept;

    //! Destructor
    virtual ~SkipList() noexcept;

    //! Copy assignment operator
    SkipList& operator=(const SkipList &other);

    //! Move assignment operator
    SkipList& operator=(SkipList &&other) noexcept;

public:
    int insert();

private:
    std::shared_ptr<Node<K, V> > m_head;
    int m_list_level;
};
#endif /* SKIPLIST_H */
