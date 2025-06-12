/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let val = init
    let obj1 = {
        increment : function(){
            return ++init
        },
        decrement : function(){
            return --init
        },
        reset : function(){
            init = val
            return init
        }
    }
    return obj1
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */