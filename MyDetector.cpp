

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"

//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		MyQueue<char> m;
		MyStack<char> a;

		for(size_t i = 0; i < s.size(); i++){

			if(isalpha(s[i])){

				m.enqueue(toupper(s[i]));
				a.push(toupper(s[i]));
			}

		}
		while ((!m.empty()) && (!a.empty())){

			if (m.front() != a.top()){

				return false;
			}
			m.dequeue();
			a.pop();
		}
		return true;
	}
}












